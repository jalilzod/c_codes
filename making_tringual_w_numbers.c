#include <stdio.h>

int main()
{
	int ch = 0;
	ch = getchar();

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
	return 0;
}
