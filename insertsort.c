#define N 100

void insersort(int n[], int a) {
	int i;
	for (i = 0; i < a; i++) {
		int key = n[i];
		int j = i - 1;
		while (j >= 0 && key < n[j]) {
			n[j + 1] = n[j];
			j--;
		}
		n[j + 1] = key;
	}
}
int main(void)
{
	int arr[N];
	int i,n;
	printf("How many numvers you wanna enter \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	insersort(arr, n);

	for (i = 0; i < n; i++) {
		printf("%d \n", arr[i]);
	}

	return 0;
}
