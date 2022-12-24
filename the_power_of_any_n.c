#include <stdio.h>

double power(double x,int n)
{
	double tmp = 1.0;
	for (int i = 1; i <= n; i++)
		tmp *= x;
	return tmp;
}
int main(void)
{
	double a;
	int b;
	puts("Enter number to count pow:");
	scanf("%lf %d", &a, &b);
	printf("%.2lf of %d pow is %.2lf\n", a, b, power(a, b));

	return 0;

}
