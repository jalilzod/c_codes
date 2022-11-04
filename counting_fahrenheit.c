//Program that converts celsius to fahrenheit
#include <stdio.h>
int main()
{
    double cel,fahr;
    scanf("%lf",&cel);
    //covert celsius into celsius
    fahr=(1.8)*cel+32;
    printf("celsius=%lf, fahrenheit=%lf\n",cel, fahr);
    return 0;
}
