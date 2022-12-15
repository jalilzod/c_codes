#include <stdio.h>

int main ()
{

    char c;

    scanf("%c",&c);
    getchar();
    printf("%d ",c);
    if(c>='a'&&c<='z'){
        printf("%d ",c-'a'+1);
    }
    else if(c>='A'&&c<='Z'){
    printf("%d ",c-'A'+1);
    }

    return 0;
}
