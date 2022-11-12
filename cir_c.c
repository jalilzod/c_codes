#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    while (scanf("%d",&n)==1)
    {
        if (n==0) break;
        double h;
        if(n<=3) h = (n - 1)*5+1.75;
        else
        h = 10 + (n-3)*3 + 1.75;

        printf("%.3f\n",sqrt(2*h/9.8));
    }
    return 0;
}
