#include <stdio.h>

int atoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main(void)
{
	char str[12] = { 0 };
	scanf("%s", str);
	int conv = atoi(str);
	printf("%d", conv);

	return 0;
}
