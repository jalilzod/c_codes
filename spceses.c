#include <string.h>
#include <ctype.h>

int numsp(char s[])
{
	int i = 0 ,space = 0;
	while (s[i] != '\n') {
		if (s[i] == ' ') space++;
		i++;
	}
	return space;
}


int main(void)
{
	char  str[20];
	int n = 0;
	//fgets(str, 19, stdin);
	char ch = getchar();
	while (!isalpha(ch)) ch = getchar();
	while (isalpha(ch)) {
		if (n > 18) goto print;
		str[n++] = ch;
		ch = getchar();
	}
     print:
	str[n] = '\n';

	printf("The number of spaces is %d\n", numsp(str));

	return 0;
}

