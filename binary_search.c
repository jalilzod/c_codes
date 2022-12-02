#include <stdio.h>

int main ()

{
    int n ,r = 0;
    scanf("%d",&n);
    do{
        r = r*2+n%2;
        n/=2;

    }while (n!=0);
    printf("%d\n",r);


    return 0;
}

