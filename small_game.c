#include <stdio.h>
int main(void)
{
	int hand = 0;
	do {
		printf("Please choose one of them [0---rock]/[paper--1]/[scissors--2]:");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);//while (hand <= 0 && hand >= 2);
	printf("You have choosen ");
	switch (hand)
	{
	case 0:printf("rock\n"); break;
	case 1:printf("paper\n"); break;
	case 2:printf("scissors\n"); break;
	}
	return 0;
}
