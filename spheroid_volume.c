#include <stdio.h>
#define pi 3.1415926

int main()
{
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);
     v = (4.0 / 3.0 * (pi * (r * r * r)));

     printf("%.3lf\n", v);
     return 0;
}
