#include <stdio.h>

int main()
{
	int weight = 0;
	int high = 0;
	double bmi = 0.0;
	scanf("%d %d", &weight, &high);

	bmi = weight / ((high / 100.0) * (high / 100.0));

	printf("%.2lf\n", bmi);


	return 0;
}
