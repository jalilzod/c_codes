#include <stdio.h>

void put_string(char s[][127],int n) //save  characters in string array
{
    int i = 0;
    for(i=0;i<n;i++){
        printf("s[%d] ",i);
        scanf("%s",s[i]);
    }
    for(i=0;i<n;i++) //show tring array's value
        printf("s[%d] = \"%s\"\n",i,s[i]);

}

int main (void)
{
    char ch[5][127]; //5 string array
    int sz = sizeof(ch)/sizeof(ch[0]);
    put_string(ch,sz);
    return 0;
}
