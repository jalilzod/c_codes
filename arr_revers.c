#include <stdio.h>

int main()
{
	int i = 0;
	int arr[6];
	for (i = 5; i >0; i--)
		arr[i] = i -1;
	for (i = 5; i>0; i--)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}
