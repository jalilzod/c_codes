#include <stdio.h>
#define N 20
int main()
{
    char in[N], out[N];
    char c;
    int i = 0, digit = 0;
    while((c = getchar()) != ' ')
    {
        in[i ++] = c;
    }
    digit = i;
    int n;
    scanf("%d", &n);
    for(i = 0; i < digit; i ++)
    {
        out[(i + n) % digit] = in[i];

    }
    printf("%d ", digit);
    for(i = 0; digit != 1 && out[i] == '0'; i ++);
    for(; i < digit; i ++)
    {
        printf("%c", out[i]);
    }
    return 0;}
