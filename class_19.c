#include <stdio.h>
//
//int main ()
//{
//    int arr[10] = {1,2,3,4,5,6,8,9,10};
//
//    int* p = arr;
//    int i = 0;
//
//    for(i = 0; i < 9; i++)
//    {
//        printf("%d ",*p);
//        p++;
//    }
//    return 0;
//}

//int main ()
//{
//    int a = 10;
//    int* pa = &a;
//    printf("%p",&a);
//    return 0;
//}

//int main ()
//{
//    int a = 10;
//    int* p = &a;
//    *p = 100;
//
//    printf("%p\n",&a);
//    printf("%d\n",*p);
//
//    return 0;
//
//}
//int main ()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    *pa = 0;
//
//    printf("%d",*pa);
//
//    return 0;
//}
//
//int main ()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//
//    int i = 0;
//    for(i = 0;i < 4; i++)
//    {
//        *pc = 1;
//        pc++;
//
//    }
////    int* pa = &a;
////    char* pc = &a;
////    printf("%p\n",pa);
////    printf("%p\n",pa+1);
//
//    printf("%p\n",pc);
//    printf("%p\n",pc+1);
//    return 0;
//
//}
//int main ()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* p = arr;
//    int i = 0;
//
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ",*p);
//        p++;
//    }
//    return 0;
//}

//int* test()
//{
//    int a = 10;
//    int *p = &a;
//    return &a;
//}
//int main ()
//{
//    int *p = test();
//    printf("%d\n",*p);
//
//    return 0;    wrong code;

//}


//int main ()
//{
//    int a = 10;
//    int* p = NULL;
//    if(p!= NULL)
//    {
//        printf("%d\n",*p);
//
//
//    }
//    return 0;
//}
//
//int main ()
//{
//    char ch[5] = {0};
//    int arr[10] = {0};
//    printf("%d\n",&arr[0]-&arr[9]);
//
//
//    return 0;
//
//}

#include <string.h>

//int my_strlen(char* str)
//{
//    char* start = str;
//    while (*str != '\0')
//    {
//        str++;
//    }
//    return str - start;
//}
//int main ()
//{
//    char arr[] = "abcd";
//    int len = my_strlen(arr);
//
//    printf("%d\n",len);
//
//    return 0;
//}

//int my_strlen(char* str)
//{
//    char* start = str;
//    while(*str != '\0')
//    {
//        str++;
//    }
//    return str - start;
//}
//int main ()
//{
//    char arr[] = "abcdef";
//    printf("%d\n",strlen(arr));
//
//    return 0;
////}
//int my_stlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main ()
//{
//    char arr[] = "ECNU";
//
//    int len = my_stlen(arr);
//
//    printf("%d\n",len);
//
//    return 0;
//}
//
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0' )
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main ()
//{
//    char arr[] = "abcdefg";
//    int len = my_strlen(arr);
//
//    printf("%d\n",len);
//
//    return 0;
//}

//
//int main ()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    for (i = 0; i < sz; i++)
//    {
//        *p = i + 1;
//        p++;
//    }
//    p = arr;
//    for(i = 0; i < sz; i++)
//    {
//        printf("%d ", *p);
//        p++;
//    }
//
//    return 0;
//}


//int main ()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz;i++)
//    {
//        *p = i+1;
//         p++;
//
//    }
//    p = arr;
//    for(i = 0; i < sz; i++)
//    {
//        printf("%d ",*p);
//        p++;
//
//    }
//    return 0;
//}

//
//int main ()
//{
//    int arr[20] = {0};
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//
//    for (i = 0;i < sz; i++)
//    {
//        *p = i+1;
//         p++;
//    }
//    p = arr;
//    for(i = 0; i < sz; i++)
//    {
//        printf("%d ",*p++);
//
//
//    }
//    return 0;
//}


int main ()
{
    int arr[10] = {0};
    int* p = arr;
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for(i = 0;i < sz; i++)
    {
        *(p+i)= i+1;

    }
    for(i = 0;i < sz; i++)
    {
        printf("%d ", arr[i]);

    }
    return 0;
}
