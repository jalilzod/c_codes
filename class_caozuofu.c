#include <stdio.h>
//int main ()
//{
//    int a = 10;
//    int b = a>>2; right move
//
//    printf("%d ",b);
//    return 0;
//}
//{
//
//int a = -1; left move
//int b = a<<2;
//
//printf("%d ",b);
//
//return 0;
//}

// 按位与 & 两个同时位1 = 1
 //有零= 0
// 11111111111
// 00000000011 =
// 00000000011
//{
//int a = 3;
//int b = -5;
//int c = a & b;
//
//printf("%d ", c);
//return 0;
//}

//按位或 |  有1 则1 有两个零才零
  // 00000000000001111
//   00000000001100001=
//   00000000001101111
//{
//    int a = 3;
//    int b = -5;
//
//    int c = a | b;
//
//    printf("%d\n",c);
//
//    return 0;
//
//}
// 按位异或 ^
   // 相同为零 相异为1
   //00000000000111
   //11111111111111 =
//   11111111111000
//{
//    int a = 3;
//    int b = -5;
//
//    int c = a ^ b;
//
//    printf("%d\n",c);
//
//    return 0;
//
//}
//赋值操作符
//{
//    int weight = 120;
//    weight = 140;
//
//    printf("%d ",weight);
//
//    return 0;
//}

//{
//    int a = 10;
//    int b = 6;
//    int c = 10;
////     c += a;
////  c *= b; //c = c*b;
////    c/=a; // c = c / a;
//    printf("%d",c);
//    return 0;
//}

//#include <stdbool.h>  // bool type
//
//int main ()
//{
//    _Bool flag = true ;
//    if(flag)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//
//#include <stdbool.h>
//
//_Bool is_leap_year(int n)
//{
//    if(((n % 4 == 0)&&(n % 100 != 0))||(n %400 == 0))
//        return true;
//    else
//        return false;
//}
//int main ()
//{
//    int n = 0;
//    scanf("%d",&n);
//    _Bool leap = is_leap_year(n);
//    printf("%d\n", leap);
//
//    return 0;
//}

//
//// 正负 符号
//int main ()
//{   11111111111111111110110
//    unsigned int a = -10;  当用unsigned 他以为前面的符号位都是有小数
//    printf("%u\n",a);
//
//    return 0 ;
//}
//
//int main ()
//{
//    int a = 10;
//    int* pa = &a;
//
//    char ch = 'w';
//    char* pc = &ch;
//    char arr[10] = {0};
//    char* p2 = &arr;
//    printf("%p\n%p\n%p",&a,&ch,&arr);
//
//    return 0;
//}

//、、、、、、、/////sizeof 操作符 //////////////////

//int main ()
//{
//    double b = 1.1;
//    int a = 10;
//    char c = 'w';
//    short d = 0;
//    int arr[] = {10};
//    printf("%d\n",sizeof a);
//    printf("%d\n",sizeof(int));
//    printf("%d\n",sizeof b);
//    printf("%d\n",sizeof c);
//    printf("%d\n",sizeof d);
//    printf("%d\n",sizeof (arr));
//
//
//    return 0;
//}

      // ~ 按位取反 //////////////////////// 整数 不能浮点数

//int main ()
//{
//    int  a = 0;
//
//    printf("%d\n",~a); 结果 -1 0 = 00000000000000000000
                    //          ~ = 11111111111111111111
//
//    return 0;
//}
int main()
{
    int a = 9;
    //000000000000000000000001001
 //   如果向1前面的零变1那我们要给剩下的数补上异或
 // 000000000000000000000001001
 // 000000000000000000000010000  1<<4
 //=000000000000000000000011001
    a |= (1<<4);
    printf("%d\n",a);

    return 0;
}


