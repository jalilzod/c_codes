#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STAGE 10
int main(void)
{
	int num[MAX_STAGE];
	int n,i,chos,tru;
	int remain;
	remain = 0;
	srand(time(NULL));
	printf("Please choose:\n");
	printf("1.-----easy----:\n");
	printf("2.-----medium---:\n");
	printf("3.-----hard---:\n");
	scanf("%d", &chos);
	if (chos == 1) {
		do {
			tru = 1+rand() % 9 + 1;
			printf("Enter a number between 1--9\n");
			printf("You've got %d more chances\n", MAX_STAGE - remain);
			scanf("%d", &n);
			num[remain++] = n;
			if (n < tru)
				printf("Enter bigger one\n");
			else if (n > tru)
				printf("Enter smaller one\n");
		}while(n!=tru&&remain<MAX_STAGE);
		if (n != tru)
			printf("Opps!!right answer is %d\n", tru);
		else {
			printf("you've got right answer\n");
			printf("you've used %d of your chances\n", remain);
		}
	}
	else if (chos == 2) {
		do {
			tru = 1+rand() % 99 + 1;
			printf("Enter a number between 1--99\n");
			printf("You've got %d more chances\n", MAX_STAGE - remain);
			scanf("%d", &n);
			num[remain++] = n;
			if (n < tru)
				printf("Enter bigger one\n");
			else if (n > tru)
				printf("Enter smaller one\n");
		} while (n != tru && remain < MAX_STAGE);
		if (n != tru)
			printf("Opps!!right answer is %d\n", tru);
		else {
			printf("you've got right answer\n");
			printf("you've used %d of your chances\n", remain);
		}
	}
	else if (chos == 3) {
		do {
			tru = 1 + rand() % 999 + 1;
			printf("Enter a number between 1--999\n");
			printf("You've got %d more chances\n", MAX_STAGE - remain);
			scanf("%d", &n);
			num[remain++] = n;
			if (n < tru)
				printf("Enter bigger one\n");
			else if (n > tru)
				printf("Enter smaller one\n");
		} while (n != tru && remain < MAX_STAGE);
		if (n != tru)
			printf("Opps!!right answer is %d\n", tru);
		else {
			printf("you've got right answer\n");
			printf("you've used %d of your chances\n", remain);
		}
	}
	puts("histroy of your numbers\n");
	for (i = 0; i < remain; i++)
		printf("%2d:%4d  %+4d\n", i + 1, num[i], num[i] - tru);

	return 0;
}
