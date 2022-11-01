#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,disc,x1,x2,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);
    disc = b*b-4*a*c;

    if (disc>0)
    {
    x1 = (-b-sqrt(disc))/(2.0*a);
    x2 = (-b+sqrt(disc))/(2.0*a);
    printf("%f %f",x1,x2);
    }
    else if (disc==0)
    {
        x1 = x2 = (-b/(2.0*a));
        printf("%f ",x1);

    }
    else if (disc<0)
    {
        printf("No Answer\n");
    }

    return 0;

}

