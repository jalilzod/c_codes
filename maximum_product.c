#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num3 = n/3, num2 = 0;
    if(n % 3 == 1)
    {
        num3 -- ;
        num2 = 2;
    }

    else if(n % 3 == 2)
    {
        num2 = 1;
    }
    printf("%.0lf",pow(3,num3)*pow(2,num2));
    return 0;

}
