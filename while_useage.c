#include <stdio.h>
int main(void)
{
	int n = 0;
	printf("Enter a number:>>");
	scanf("%d", &n);
	int i = 0;

	while (i <= n) {

		printf("%d ", i++);
	}
	printf("\n");

	return 0;
}
