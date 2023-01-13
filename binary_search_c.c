#include <stdio.h>
#define N 10
int main (void)
{
    int arr[N] = {0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i,k;
    int left = 0;
    int right = sz - 1;

     printf("Enter %d numbers\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);

    printf("Enter number you want to search:");
    scanf("%d",&k);

   int  mid = left + (left + right) / 2;
    while(left<=right){
        if(mid[arr]>k){
        left = mid+1;
        }
    if(mid[arr]<k){
        right = mid - 1;
    }
    else {
        printf("Found index is %d",mid);
        break;
    }
}
    if(left>right)
        printf("Could not find\a");
    return 0;
}

