#include <stdio.h>
#define NUMBER 5
void swap(int* x,int* y)// swap two integer
{
    int tmp = *x;
    *x = *y;
    *y = tmp;

}
void bsort(int v[], int n )//bubble sort
{
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = n - 1; j > i; j--){

            if(v[j - 1] > v[j]){
                swap(&v[j], &v[j-1]);
            }
        }

    }

}
int main (void)
{
    int arr[NUMBER];
    int i;

    for(i = 0;i < NUMBER;i++){
        printf("arr[%d] ",i + 1);
        scanf("%d", &arr[i] );

    }

    puts("Buble sort:\n");
    bsort(arr, NUMBER);
    for(i = 0; i < NUMBER; i++)
    printf("arr[%d] = %d\n",i, arr[i]);
    return 0;
}
