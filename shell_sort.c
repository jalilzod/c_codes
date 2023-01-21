#include <stdio.h>

void shellsort(int a[],int n)
{
    int gap,i,j,tmp;
   for(gap = n/2;gap>0;gap/=2)
    for(i=gap;i<n;i++)
        for(j=i-gap;j>=0&&a[j]>a[j+gap];j-=gap){
            tmp = a[j];
        a[j] = a[j+gap];
        a[j+gap] = tmp;
        }
}
int main (void)
{
    int arr[10] = {12,4,3,5,8,9,45,3,23};
    int sz = sizeof(arr)/sizeof(arr[0]);

    shellsort(sarr,sz);
    for(int i =0;i<sz;i++)
        printf("arr[%d] = %d\n",i,arr[i]);
    return 0;
}
