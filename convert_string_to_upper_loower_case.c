#include <stdio.h>
#define MAXSTR 1000

char str[MAXSTR];

int main (void)
{
    int i = 0;
    extern char str[];
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
        printf("%s",str);

    return 0;
}
