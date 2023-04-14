
int main(void)
{

		int a;
		int rem;
		int retry = 1;
		int arr[10];
		int i, j = 0;
		do {
			scanf("%d", &a);
			while (a > 0) {
				rem = a % 8;
				a /= 8;
				arr[j++] = rem;
			}
			for (i = j-1; i>=0; i--) {
				printf("%.1d", arr[i]);
			}
			printf("\nEnter 1\n");
			scanf("%d", &retry);
			for (i = 0; i < j; i++) {
				arr[i] = 0;
			}

		} while (retry);

	return 0;
}
