#include <stdio.h>
int Fib(int n)
{
    if (n<=2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main ()

{
    int n = 0;
    scanf("%d",&n);

    int ret = Fib(n);
    printf("%d\n",ret);
    return 0;
}
