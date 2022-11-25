
#include <stdio.h>
//
int main ()
{
    int a = 10;
    int* pa = &a;
    *pa = 20;
    printf("%d",a);

    return 0;
}
    int main ()
{
    int a = 10;
    int* pa = &a; //1 ji zhizhen bianliang
    int** ppa=&pa;//erji zhizhen bianliang
    **ppa = 50;
    printf("%d\n",**ppa);
    printf("%d",a);
    return 0;
}
//
////zhizhen shuzu
//int main ()
//{
//    int arr[5] = {1,2,3,4,5};
//
//    int a = 10;
//    int b = 20;
//
//}

