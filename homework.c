//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i)+(++i)+(++i);
//    printf("ret = %d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


#include <stdio.h>
void print(int x)
{
    if(x > 5)
    {
        print(x / 6);
    }
    printf("%d",x % 6);
}
int main()
{

    int n = 0;
    scanf("%d", &n);
    print(n);


    return 0;

}
