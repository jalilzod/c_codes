#include <stdio.h>
int DigitSum(int n)
{
    if (n > 9)
        return DigitSum(n / 10) + n % 10;
    else
        return n;
}
int main (void)
{
    int n = 0;
    scanf("%d", &n);
    int sum = DigitSum(n);
    printf("%d\n", sum);

    return 0;
}
