#include <stdio.h>
int max(int* x, int* y)
{
    return (*x > *y) ? *x : *y;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


void first_p(int* a, int* b, int* c, int* d,int *s,int *ml)
{
    *s = *a + *b + *c + *d;
    *ml = *a * *b * *c * *d;
}

int main(void)
{
    int a, b, c, d;
    int sum,mul;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sum = mul = 0;
    first_p(&a, &b, &c, &d, &sum, &mul);

    printf("Sum = %d\nMulti = %d\n", sum, mul);
    swap(&sum, &mul);
    printf("Sum = %d\nMulti = %d\n", sum, mul);

    printf("Max is %d", max(&sum, &mul));


    return 0;
}
