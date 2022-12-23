#include <stdio.h>
#define SIZE 5
int main()
{
	int i, j;
	int sum = 0;
	int a[SIZE];
	int b[SIZE] = { 1,2,3 };
	int sum1 = 0;

	int c[2][3] = { {11,22,33},{44,55,66} };

	for (i = 0; i < SIZE; i++)
		a[i] = b[i];
	puts("The value of a is:");
	for (i = 0; i < SIZE; i++)
		printf("a[%d] = %d\n", i, a[i]);

	puts("The value of b is:");
	for (i = 0; i < SIZE; i++)
		printf("b[%d] = %d\n", i, b[i]);
	for (i = 0; i < SIZE; i++)

		sum += a[i];
	printf("array a 's all value = %d\n", sum);

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			sum1 += c[i][j];
			printf("sami %d\n ", sum1);
		}
	}

	return 0;
}

