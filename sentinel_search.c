#include <stdio.h>

#define NUMBER 4
#define FAILED -1

int search(int v[], int key, int n)//from array v search the n number which is the same with key
{
	int i = 0;
	v[n] = key;

	while (1) {
		if (v[i] == key)
			break;//found
		i++;
	}
	return (i < n) ? i : FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]: ", i);
		scanf("%d", &vx[i]);
	}
	printf("Enter a number for search: ");
	scanf("%d", &ky);

	if ((idx = search(vx, ky, NUMBER)) == FAILED)
		puts("\aFailed");
	else printf("%d array's number is the %d\n", ky, idx +1 );

	return 0;
}
