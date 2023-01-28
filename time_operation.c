#include <stdio.h>

#include <time.h>
#include <string.h>

int strlen_f(char s[])
{
	int i,l=0;
	for (i = 0; s[i] != '\0'; i++)
		l++;
	return l;
}
int sleep(unsigned int x)//function for sleep time operation
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == clock_t() - 1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
int main(void)
{
	int i;
	char name[] = { "Yang Ming Yuan" };
	int name_len = strlen_f(name); //length of string you can find through library function
	while (1) { //limitless loop
		for (i = 0; i < name_len; i++) {
			putchar(name[i]);//starting from the begining one by one shows char
			fflush(stdout); //delete previous one
			sleep(1000); //per 1 sec
		}
		for (i = 0; i < name_len; i++) {
			printf("\b \b");  //satrting from the end delet one by one chars
			fflush(stdout); //delete previous one
			sleep(1000);//per 1 sec

		}
	}
	return 0;
}
