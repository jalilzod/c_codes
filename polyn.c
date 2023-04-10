#define X(x) ((x)*(x))

int main(void)
{

	int x1;
	scanf("%d", &x1);

	int  one = 3 * x1 + 2;
	int two = one * (x1 - 5);
	int three = two * (x1 - 1);
	int four = three * (x1 + 7);
	int five = four * (x1 - 6);

	printf("%d", five);

	return 0;
}
