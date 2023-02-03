#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STAGE 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}

int main(void)
{
	int i, stage;
	int level;
	int success = 0;
	clock_t start, end;
	const char ltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(NULL));

	printf("Memory English words game\n");
	do {
		printf("Enter the chaleng level(%d~%d): ", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while (level<LEVEL_MIN || level>LEVEL_MAX);
	printf("Remember %d english words\n",level);

	start = clock();

	for (stage = 0; stage < MAX_STAGE; stage++) {
		char mstr[LEVEL_MAX + 1];//the words should be rememberd
		char x[LEVEL_MAX * 2];//the string of eng words which entered by user

		for (i = 0; i < level; i++)
			mstr[i] = ltr[rand() % strlen(ltr)];
		mstr[level] = '\0';

		printf("%s", mstr);
		fflush(stdout);
		sleep(125 * level);

		printf("\r%*s\rEnter: ", level, "");
		fflush(stdout);
		scanf("%s", x);

		if (strcmp(x, mstr) != 0)
			printf("\aWrong answer\n");
		else {
			printf("Right answer\n");
			success++;
		}
	}
	end = clock();
	printf("From %d times %d are right\n", MAX_STAGE, success);
	printf("You've used %.1f sec\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
