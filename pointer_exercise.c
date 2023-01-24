#include <stdio.h>

int main(void)
{
	int i;
	int arr[10] = { 12,1,23,34,435,4,542,23,23 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i=0;i<sz;i++)
	printf("arr[%d] %d \n",i, arr[i]);
	int* pa;
	pa = &arr[5];
	printf("pa = %2d\n", *pa);

	printf("pa+1 = %3d\n",*(pa+1));
	printf("pa+1 = %3d\n",*(pa-1));
	printf("pa+2 = %3d\n",*(pa+2));

	return 0;
}
