#include <stdio.h>

int number_diff(int m,int n)
{
    int count = 0;
    int tmp = m^n;
    while(tmp)
    {
        tmp = tmp &(tmp-1);
        count++;
    }
    return count;
}
int main ()
{
    int m = 0;
    int n = 0;
    scanf("%d%d",&m,&n);
    int ret = number_diff(m,n);

    printf("%d\n",ret);

    return 0;
}
