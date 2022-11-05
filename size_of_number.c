//#include <stdio.h>
//
//int main ()
//{
//    int arr[] = {1,2,(3,4),5};
//
//    printf("%d\n",sizeof(arr));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//#include <stdio.h>
//int main ()
//{
//
//char acX[] = "abcdefg";
//char acY[] = {'a','b','c','d','e','f','g'};
//printf("%d\n%d",sizeof(acX),sizeof(acY));
//return 0;
//}

#include <stdio.h>

int main ()

{
  char acX[] = "abcdefg";
  char acY[] = {'a','b','c','d','e','f','g'};
  printf("%d %d\n",strlen(acX),strlen(acY));
  return 0;
}
