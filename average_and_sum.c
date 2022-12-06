#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int sum = 0;
	int tmp = 0;
	printf("How many numbers you want to enter:? ");
	scanf("%d", &n);
	while (n >= i) {
		printf("NO. %d ", i++);
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("The sum of munbers is: %d\n", sum);
	printf("The average is: %.2lf\n", (double)sum / n);

	return 0;
}
