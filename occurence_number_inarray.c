#include <stdio.h>

int main (void)
{
    int i,ch;
    int cnt[10] = {0};

    while((ch=getchar())!=EOF){
        if(ch>'0'&&ch<'10')
            cnt[ch-'0']++;
    }
    printf("The occurences of array's number\n");

    for(i=0;i<10;i++)
    printf("%d = %d\n",i,cnt[i]);

    return 0;
}
