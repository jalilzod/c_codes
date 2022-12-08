#include <stdio.h>

int main()
{
	int n = 0; int i = 0;

	do {
		puts("Enter a positive number:>>");
		scanf("%d", &n);
		if (n <= 0)
			puts("Please enter positive number");

	} while (n <= 0);
	printf("Result is ");
	while (n > 0) {
		n /= 10;
		i++;
	}printf("%d", i);
	return 0;
}//
