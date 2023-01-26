#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STAGE 10
int main(void)
{
	int n;
	int i;
	int stage;
	int tru;
	int num[MAX_STAGE];
	srand(time(NULL));
	tru = rand() % 100 + 1;
	printf("Enter a number from 0 to 100\n");
	stage = 0;
	do {
		printf("You,ve got %d more chances\n", MAX_STAGE - stage);
		scanf("%d", &n);
		num[stage++] = n;

		if (n > tru)
			printf("number is bigger, enter smaller one >\n");
		if (n < tru)
			printf("number is smaller enter bigger one\n");
	} while(n != tru && stage < MAX_STAGE);
	if (n != tru)
		printf("opps!! right answer is %d\n", tru);
	else {
		printf("right answer\n");
		printf("you,ve used %d of your choices\n",MAX_STAGE-stage);
	}
	puts("\nHistroy of your entered numbers\n");
	for (i = 0; i < stage; i++)
		printf("%2d : %4d %+4d\n", i + 1, num[i], num[i] - tru);
	return 0;
}
