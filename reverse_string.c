//#include <stdio.h>
//#include <string.h>
//
//char reverse_string(char* arr)
//{
//    int l = 0;
//    int r = strlen(arr)-1;
//    while (l<r)
//    {
//        char tmp = arr[l];
//        arr[l] = arr[r];
//        arr[r] = tmp;
//        l++;
//        r--;
//    }
//}
//int main ()
//{
//    char arr[] = "abcdef";
//
//    reverse_string(arr);
//
//    printf("%s\n",arr);
//    return 0;
//}












#include <stdio.h>
#include <string.h>
char reverse_string(char* arr)
{
    int l = 0;
    int r = strlen(arr)-1;

    while (l<r)
    {
        char tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
}


int main ()

{
    char arr[] = {0};
     scanf("%s",&arr);
    reverse_string(arr);

    printf("%s\n",arr);
    return 0;
}
