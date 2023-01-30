#incldue <stdio.h>
#incldue <ctype.h>
#incldue <limits.h>
void strdump(const char* s)
{
	while (*s) {
		int i;
		unsigned char x = (unsigned char)*s;
		printf("%c ", isprint(x) ? x : ' ');//character
		printf("%0*X ", (CHAR_BIT + 3) / 4, x);//hexadicimal
		for (i = CHAR_BIT - 1; i >= 0; i--)
			putchar(((x >> i) & 1U) ? '1' : '0');
		putchar('\n');
		s++;
	}
}
int main(void)
{
	puts("MING");  strdump("MING"); putchar('\n');
	puts("YUAN");  strdump("YUAN"); putchar('\n');
	return 0;
}
