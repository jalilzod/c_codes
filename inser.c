int main(void)
{
	int arr[12] = { 1,4,5,6,3,4,7,8 };
	int iteam = 10, k = 0, n = 8;
	int i = 0, j = n;
	printf("The original arr \n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	n = n + 1;
	while (j >= k) {
		arr[j + 1] = arr[j];
		j -= 1;
	}

	arr[k] = iteam;
	printf("After insertion \n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
