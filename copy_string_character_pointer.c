#include <stdio.h>
#include <assert.h>


char* str_copy(char* des, const char* res) //copies the res's string character
{                                          //and save into des
	assert(*des && *res);
	char* t = des;
	while (*des++ = *res++)
		;
	return t;
}
int main(void)
{
	char str1[123] = "ABCD";
	char str2[123];

	printf("str1 = %s\n", str1);

	scanf("%s", str2);
	printf("copied now str1 is: %s", str_copy(str1, str2));

	return 0;
}
