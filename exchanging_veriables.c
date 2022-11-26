#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("Enter two numbers:>");
	scanf("%d%d", &a, &b);
	temp = a;
	a = b;
	b = temp;

	printf("a is %d\nb is %d\n", a, b);

	return 0;
}
