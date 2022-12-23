#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int x, int y)
{
	return (x > y) ? x - y : y - x;
}
int main(void)
{
	int x, y;
	printf("Enter two numbers :");
	scanf("%d%d", &x, &y);
	printf("the diff beetwen %d and %d is: %d\n", x, y, diff(sqr(x), sqr(y)));

	return 0;
}
