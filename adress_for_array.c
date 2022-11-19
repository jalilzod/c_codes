#include <stdio.h>

int main ()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int *Arr = arr;
    int i = 0;

    for (i = 0; i < 8; i++)
    {

    printf("%d ",arr[i]);
    }
    return 0;
}
