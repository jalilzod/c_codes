#include <stdio.h>
#define N 1000 //find x in arr[0]<=arr[1]......<=arr[n-1];
int binary_search(int x, int ar[], int n)
{
	int left, right, mid;
	left = 0; right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (x < ar[mid])
			right = mid - 1;
		else if (x > ar[mid])
			left = mid + 1;
		else {             //found match
			printf("Found the index of number is %d\n", mid);
			break;
		}
	}
	return -1; //no match
}
int main(void)
{
	int arr[N] = { 0 };
	int i,n;
	int j,m;
	printf("How many numbers you want enter?>");
	scanf("%d", &m);

	for (i = 0; i < m; i++) {
		printf("%d ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter number you want to search:");
	scanf("%d", &n);
	printf("%d", binary_search(n, arr,m ));

	return 0;
}
