//#include <stdio.h>
//
//int Fun(int n)
//{
//    if(n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n",ret);
//
//    return 0;
//}



#include <stdio.h>
int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}

int main ()

{
    int ret = Fun(2);
    printf("%d\n",ret);
    return 0;
}
