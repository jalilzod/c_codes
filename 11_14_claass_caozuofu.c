#include <stdio.h>

//int main ()
//{
//    int  a = 10;
//    int b = ++a;
//    int c;
//    c = ++b + a++;
//
//    printf("%d %d %d",a,b,c);
//
//    return 0;
//
//}

//void test(int b)
//{
//    printf("b = %d",b);
//}
//
//int main ()
//{
//    int a = 10;
//    test(++a);
//    return 0;
//}

//changing type by force
//int main ()
//{
//    int a = (int)3.14159265358979;
//
//    printf("%d",a);
//
//
//    return 0;
//
//}

//int main ()
//{
//
//    srand((unsigned int)time(NULL));
//
//    return 0;
//}
//
//void test1(int arr[])
//{
//    printf("%d\n",sizeof(arr)); // result 8 首元素地上 int = 8字节
//}
//void test2(char ch[])
//{
//    printf("%d\n",sizeof(ch)); // result 8 首元素地址 char 指针 = 8字节
//}
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof(arr));
//    printf("%d\n",sizeof(ch));
//    test1(arr);
//    test2(ch);
//
//    return 0;
//}
//void test1(int arr[],int sz) // 参数用法
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ",arr[i]);   arr[i] = *(arr+i)
//    }
//    printf("\n");
//}
//void test2(int* arr,int sz )  //指针用法
//{
//    int i = 0;
//    for(i = 0;i < sz; i++)
//    {
//
//        printf("%d ",arr[i]);  arr[i] = *(arr+i)
//    }
//    printf("\n");
//}
//
//int main ()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    test1(arr,sz);
//    test2(arr,sz);
//
//    return 0;
//}

//逻辑操作符//////////////

// && 并且，  || 或者

//a && b
// 真 + 真 = 真
// 假 + 真 = 假
//int main ()
//{
//    int a = 4;
//    int b = 0;  //在c语言 0 为假 1为真、；
//    if(a&&b)
//    {
//        printf("hehe\n");// 不会打印的；
//    }
//    return 0;
//}
//int main ()
//{
//    int a = 2;
//    int b = 1;
//    if(a && b)
//    {
//        printf("hehe\n"); 会打印的
//    }
//    return 0;
//}
//

//   ||
//假 + 假 = 假
//其他 = 都真
//假 + 真 = 真
//真 + 假 = 真

//int main (void)
//{
//    int a = 1;
//    int b = 0;
//
//    if(a || b)
//    {
//        printf("hehe\n"); 会打印的
//
//    }
//    return 0;
//}
//

//int main (void)
//{
//    int a = 0;
//    int b = 0;
//
//    if(a || b)
//    {
//        printf("hehe\n"); //不会打印的
//
//    }
//    return 0;
//}
//
//int main()
//{
//    int n = 2047;
//
//    if((n % 4 == 0)&&(n % 100 != 0)||(n % 400 == 0))
//    {
//        printf("Yes\n");
//    }
//    else
//        printf("No\n");
//
//    return 0;
//}

 //条件操作符 ///////////////////////////////操作符、///

// exp1 ? exp2 : exp3
// 真     计算    不计算
// 假     不计算   计算

//三木操作符
//int main ()
//{
//    int a = 10;
//    int b = 20;
//    int m = 0;
//
////    if(a > b)
////        m = a;
////    else
////        m = b;
//
//    m = (a > b?a : b);
//    printf("%d",m);
//
//    return 0;
//}

//int main ()
//{
//    int a = 10;
//    int b = (a > 15?3 : -3); result -3
//
//    printf("%d\n",b);
//
//    return 0;
//}
//
//int main ()
//{
//int  a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);  逗号表达式从左边到右边算 c 的值是算最后的结果
//
//printf("%d", c);
//
//
//return 0;
//
//int main ()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};    //下表操作符,【4】操作数 arr
//    printf("%d\n",arr[4]);
//
//    return 0;
//}

//函数调用操作数

//int main ()
//{
//    int len = strlen("abcdef");
//    printf("%d ",len); //（） 函数调用操作符 , 操作数函数名strlen “abcdef”
//
//    return 0;
//}

//char int long short float double 都是内置类型

//自定义类型  结构体，枚举， 联合体


//结构体////// 自定义类型 聚合类型

//描述一本书
// name , author, publish, price, year etc..

//struct Book //type struct
//{
//    char name[40];
//    char author [40];
//    int price ;
//};
//int main ()
//{
//    struct Book b1 = {"Programming language","Jalizlod",98};
//    struct Book b2 = {"How to start coding","Qiyomiddin",100};
//
//    printf("<<%s>> %s price： %d\n",b1.name,b1.author,b1.price);
//
//    printf("<<%s>> %s %d\n",b2.name,b2.author,b2.price);
//
//
//
//    return 0;
//}

                   //表达式求值///////////
//int main ()
//{
//    char a = 3; //000000000000000000000000011
//                //char 1 ge zijie suoyi 00000011
//    char b = 127;//00000000000000000001111111
//                //char yige zijie01111111
//    char c  = a + b;
//    //整形提升  前面是0 所提觉得符号位是零前面补零
//    //00000000000000000000000001111111
//    //00000000000000000000000000000011
//    //00000000000000000000000010000010 把这个存到char c
//    //可是因为他是一个字节所以这能容纳最后八位
//    //10000010 - c
////    change in to 10 jin'zhi
////    前面1加1
////    1111111111111111110000010 补码
////    1000000000000000001111101
//
//
//
//
//
//    printf("%d\n", c); //类型
//
//    return 0;
//}

//
//int main ()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0x6000000;
//
//    if(a == 0xb6)
//    {
//        printf("a");
//
//    }
//    if (b == 0xb600)
//    {
//        printf("b");
//    }
//    if (c == 0x6000000)
//     {
//        printf("c");
//     }
//   return 0;
//}
//int main ()
//{
//    char c = 1;
//
//    printf("%u\n",sizeof(c));
//    printf("%u\n",sizeof(+c));
//    printf("%u\n",sizeof(-c));
//
//    return 0;
//}


//操作符的属性////

int main ()
{
    int a = 1;
    int b = 2;
    int c = 4;

    int d = a * 4 + b / 3 + 3;

    printf("%d ",d);

    return 0;
}




