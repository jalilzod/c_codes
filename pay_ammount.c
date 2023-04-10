#include <stdio.h>

int main(void)
{
	int twent = 0,ten = 0,five = 0,one = 0;
	int number;
	scanf("%d", &number);
	while (number) {
		 twent = number / 20;
		number -= twent * 20;
		 ten = number / 10;
		number -= ten * 10;
		five = number / 5;
		number -= five * 5;
		 one = number / 1;
		number -= one * 1;
	}

	printf("%d %d %d %d\n", twent, ten, five, one);

	return 0;
}
