#include <stdio.h>

int Max(int a, int b)
{
    return a > b ? a : b;
}
int (*maxf)(int,int);
int main(void)
{
    int a, b;
    maxf = Max;
    scanf("%d%d", &a, &b);
    printf("a = %d\nb = %d\nMAX = %d", a, b, (*maxf)(a, b));

    return 0;
}
