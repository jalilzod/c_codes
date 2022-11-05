#include <stdio.h>
#include <math.h>
int Fac(int n)
{
    if (n<=1)
        return 1;
    else
        return n * Fac(n - 1);
}
int main ()

{
    int n = 0;
    scanf("%d",&n);

    int ret = Fac(n);

    printf("%d\n",ret);
    return 0;

}
