#include <stdio.h>

int count_bits(unsigned x) //Returns the number set in the x integer
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}
int int_bits(void) // returns unsigned type's digit
{
	return count_bits(~0U);

}

void print_bits(unsigned x) //show the element of type unsigned
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned a, b;
	printf("Enter two positive number: \n");
	scanf("%d%d", &a, &b);

	printf("\na   =       "); print_bits(a);
	printf("\nb   =       "); print_bits(b);
	printf("\na&b =       "); print_bits(a&b);
	printf("\na|b =       "); print_bits(a|b);
	printf("\na^b =       "); print_bits(a^b);
	printf("\n~a  =       "); print_bits(~a);
	printf("\n~b  =       "); print_bits(~b);


	return 0;
}
