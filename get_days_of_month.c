#include <stdio.h>


int get_days_of_mont(int y, int m)
{
	int day = 0;
	switch (m) {

	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31; break;
	case 4: case 6: case 9: case 11:
		day = 30; break;


		{
	case 2: day = 28;
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
			day++;
		}
		break;
	}
	return day;
}
int main()
{
	int y = 0;
	int m = 0;

	while (scanf("%d %d", &y, &m) == 2)
	{
		int ret = get_days_of_mont(y, m);
		printf("%d\n", ret);


	}
	return 0;
}
