#include <stdio.h>
int main ()
{
    double x,L,R,M;
    scanf("%lf",&x);

    if(x>=1) {L=1;R=x;}
    else {L=x;R=1;}

    M = (L+R)/2;
    while (R-L>1e-6)
    {

        if(M*M>x) R = M;
        else L = M;
        M = (L+R)/2;

    }
    printf("%f\n",M);
    return 0;
}
