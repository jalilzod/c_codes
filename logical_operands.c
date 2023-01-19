unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return x & ~(~(~0 << n) << (p + 1 - n))
		| (y & ~(~0 << n )) << (p + 1 - n);
}
int main(void)
{
	int x = 200;

	printf("%d", setbits(x, 2, 3, 4));

	return 0;
}
