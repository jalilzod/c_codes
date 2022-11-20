//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
////}
#include <stdio.h>

int main ()
{
    int a = 5;
    int b = 4;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d ",a,b);

    return 0;
}
