#include <stdio.h>

int main (void)
{
    int n = 0;
    double weight = 0.0;
    printf("Enter your height:\n");
    scanf("%d",&n);
    weight = (n-100)*0.9; //formula for counting standard weight

    printf("Your weigth is %lf",weight);

    return 0;
}
