#include <stdio.h>

int main ()
{
    char c;
    int i;
    scanf("%c",&c);

    for ( i = 7;i>=0;i--)
    {
        printf("%d",(c>>i)&1);
    }
    return 0;
}
