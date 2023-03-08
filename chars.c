#include <stdio.h>

int main(void)
{
	file* in = fopen("out.txt", "r");
	if (in == null) {
		printf("error\a");
		return -1;
	}
	char ch;
	int vovels = 0;

	while ((ch = getc(in)) != eof) {
		if (ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'a') {
			putchar(ch);
			vovels++;
			ch = getc(in);
		}
	}
	putchar('\n');
	printf("%d", vovels);
	fclose(in);

	return 0;
}
