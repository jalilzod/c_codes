//#include <stdio.h>
//
//
//int Swap(int* parr,int* parr2)
//{
//    int tmp = *parr;
//    *parr = *parr2;
//    *parr2 = tmp;
//
//}
//int main ()
//{
//    int arr[] = {1,2,3};
//    int arr2[] = {4,5,6};
//    printf("Before: %d %d\n",arr,arr2);
//    Swap(&arr,&arr2);
//
//    printf("After: %d %d\n",arr,arr2);
//
//    return 0;
//}


//
//struct node
//{
//    int value;
//    struct node *next;
//};
//
//void rearrange(struct node *list)
//{
//   struct node *p, * q;
//   int temp;
//   if ((!list) || !list -> next)
//      return;
//   p = list;
//   q = list -> next;
//   while(q)
//   {
//       temp = p -> value;
//       p -> value = q -> value;
//       q -> value = temp;
//       p = q -> next;
//       q = p ? p -> next:0;
//   }
//}

//
//#include <stdio.h>
//
//int main() {
//   printf("  v   v\n ");
//   printf("  v v\n");
//   printf("    v\n");
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    printf("0%o 0X%X",1234,1234);
//       return 0;
//}
//#include <stdio.h>
//
//int main()
// {
//     int a = 0XABCDEF;
//     printf("%.15d",a);
//    return 0;
//}

//#include <stdio.h>
//
//int main ()
//
//{
//    int a = 0;
//    scanf("%X",&a);
//    printf("%#o",a);
//    return 0;
//}

#include <stdio.h>
int main ()
{
    int a = 0;
    scanf("%d",&a);

    while (a)
    {
        printf("%d", a % 10);
        a = a / 10;
    }

    return 0;
}
