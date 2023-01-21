#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    int left,right,tmp;
    for(left = 0,right = strlen(s)-1;left<right;left++,right--){
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
    }
}
void itoi(int n,char s[])
{
    int i,sign;
    if((s[i++]=n)>0)
        n = -n;
    i = 0;
    do{
        s[i++] = n%10+'0';

    }while((n/=10)>0);
    if(sign<0)
        s[i++]='-';
    s[i] = '\0';
    reverse(s);

}

int main (void)
{
    int n;
    char s[123] = {0};
    scanf("%s",&s);
    scanf("%d",&n);
    itoi(n,s);
    printf("%s",s);
    return 0;
}
