#include <stdio.h>
int  main (void)
{
   int arr[5] = {1,2,3,4,5};
   int* p = arr;
   int i = 0;
   for(i=0;i<5;i++)
   printf("&arr[%d]=%p  p+%d=%p\n",i,&arr[i],i,p+i);

   return 0;

}
