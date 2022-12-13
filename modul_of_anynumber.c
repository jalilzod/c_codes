#include <stdio.h>

int main()
{
	int n = 0; int i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i+=2)
	{
		if (n % 1 == 0)
			printf("%d ",i);
	}
	putchar('\n');

	return 0;
}
