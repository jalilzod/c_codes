#include <stdio.h>
int main()
{
	int i = 0; int j = 0; int seki = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			seki = i * j;
//			if (seki > 50)
//			break;
			printf("%3d", seki);
		}
		putchar('\n');
	}

	return 0;
}
