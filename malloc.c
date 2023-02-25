#include <malloc.h>
#include <string.h>
#include <stdio.h>

void GetMem(char** s)
{
	*s = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMem(&str);
	strcpy(str, "Hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main(void)
{
	Test();

	return 0;
}
