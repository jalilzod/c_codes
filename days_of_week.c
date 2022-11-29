#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d", &day);

	int n = 2;
	switch (day)
	{
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednsday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n"); break;
	case 6: printf("Saturday\n"); break;
	case 7: printf("Sunday\n"); break;

	}
	return 0;
}
