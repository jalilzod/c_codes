#include <stdio.h>

int main ()
{
//    int a = 10;
//    int* pa = &a;
//    *pa = 100;
//    printf("%p\n",&a);
//    printf("%d\n",a);
//
//     return 0;
   int a = x0111222333;
   char* pc = (char*)&a;
   int i = 0;
   for(i=0;i<4;i++)
   {
       *pc = 0;
        pc++;
   }
printf("%p\n",i);
return 0;

}
