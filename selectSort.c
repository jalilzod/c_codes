#define N 100

int getsmal(int n[], int left, int right)
{
	int small = left;
	for (int i = left+1; i <= right; i++)
		if (n[i] < n[small])
			small = i;

	return small;
}
void swap(int n[], int left, int right) {
	int tmp = n[right];
	n[right] = n[left];
	n[left] = tmp;
}

void sort(int n[], int left, int right)
{
	for (int i = left; i <= right; i++) {
		int s = getsmal(n, i, right);
		swap(n, i, s);
	}
}

int main(void)
{
	int arr[N];
	int m,i;
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, 0, m-1);

	for (i = 0; i < m; i++) {
		printf("%d ", arr[i]);

	}
	return 0;
}
