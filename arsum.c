#include <stdio.h>
#define Max 100

int main(void)
{
	int a, num[Max];
	int n = 0;
	double sum = 0;
	printf("Enter up to %d numbers\n", Max);
	scanf("%d", &a);
	while (a != 0) {
		sum += a;
		num[n++] = a;
		scanf("%d", &a);
	}
	if (n == 0) {
		printf("No numbers were intered\n");
	}
	else {
		printf("%d numbers were intered\n",n);
		printf("Sum of numbers is %.2f\n", sum);
		double average = sum / n;
		printf("The average is %f\n", average);
		for (int i = 0; i < n; i++) {
			printf("%4d %4.2f\n", num[i], num[i] - average);
		}
	}
	return 0;
}
