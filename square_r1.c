#include <math.h>
#include <stdio.h>
int main ()
{
     double number,squareRoot;
     scanf("%lf",&number);
     //computing the square root
     squareRoot=sqrt(number);

     printf("%.6lf",squareRoot);
     return 0;
}
