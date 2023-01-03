#include <stdio.h>

#define NUMBER 5


void bsort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n-1; j > i; j--) {
			if (a[j-1] < a[j]) {
				int tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main(void)
{
	int i;
	int height[NUMBER];

	printf("Enter %d student's height\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("NO%d ", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("Sorted :\n");

	for (i = 0; i < NUMBER; i++)

		printf("No%2d  %d\n", i + 1, height[i]);


	return 0;
 }
