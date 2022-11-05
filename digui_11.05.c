#include <stdio.h>
#include <string.h>

int Func(int n)
{
    if (n>9)
    {
        Func(n/10);
    }
    printf("%d ",n % 10);
}
int main ()
{
    int num = 0;
    scanf("%d",&num);

    Func(num);

    return 0;
}
