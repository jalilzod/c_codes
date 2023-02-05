#include <stdio.h>

#define MAX 10

int main (void)
{
    int i;
    int retry;
    int cnt = 0;
    int a[MAX];

    printf("Enter a number:\n");
    do{
        if(cnt>=MAX){
            for(i=0;i<MAX-1;i++)
                a[i] = a[i+1];
        }
        printf("The %d number\n",cnt+1);
        scanf("%d",&a[cnt<MAX?cnt:MAX-1]);
        cnt++;
        printf("Wanna try more? YES[1]---NO[0]");
        scanf("%d",&retry);
    }while(retry==1);
    if(cnt<=MAX)
        for(i=0;i<cnt;i++)
        printf("The number %2d  %d\n",i+1,a[i]);
    else
        for(i=0;i<MAX;i++)
        printf("The %2d  %d\n",cnt-MAX+1+i,a[i]);

    return 0;
}
