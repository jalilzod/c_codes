#include <stdio.h>
#include <string.h>


int strlen_l(char* s)
{
	char* t = s;
	while (*t != '\0')
		t++;
	return t - s;
}
int str_len(char* s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}
int st_rlen(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		        ;
		return i;
}

int main(void)
{
	char s[] = { "edwedwedwd" };
	printf("%d\n", strlen_l(s));
	printf("%d\n", str_len(s));
	printf("%d\n", st_rlen(s));
	printf("%d\n", strlen(s));

	return 0;
}
