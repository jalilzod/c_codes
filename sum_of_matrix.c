
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr1[4][3] = { {3,2,4},{5,4,3},{2,5,6},{6,3,2} }; // 4 row 3 col
	int arr2[4][3] = { {2,4,3},{2,6,5},{3,2,3},{6,5,3} };//4 row 3 col
	int sum[4][3];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			sum[i][j] = arr1[i][j] + arr2[i][j];
	}
	puts("The sum of two matrix is:");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}
	return 0;
}
