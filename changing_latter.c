//   #include <stdio.h>
//   int main()
//     {  char c;
//        scanf("%c",&c);
//        if (c>='A'&&c<='Z') c+=32;
//        printf("%c\n",c);
//        return 0;
//     }


//  int main ()
//  {
//      int number = 0;
//      int cost = 0;
//      scanf("%d",&number);
//      if (number>500)       cost=(1-0.15)*number;
//   else if (number>300)  cost=(1-0.10)*number;
//   else if (number>100)  cost=(1-0.075)*number;
//   else if (number>50)   cost=(1-0.05)*number;
//   else                  cost=number;
//
//   printf("%d",cost);
//
//   return 0;
//  }
//char grades(char n)
//{
//    int grades = 0;
//switch (grades)
//  { case 'A': printf("85 – 100");
//    case 'B': printf("70 – 84");
//    case 'C': printf("60 – 69");
//    case 'D': printf("<60");
//    default : printf("ERROR");
//   }
//   return grades;
//}
//int main()
//{
//    char n = 0;
//    int grade = 0;
//    scanf("%s",&n);
//    char gr = grades(n);
//    printf("%d",gr);
//
//
//   return 0;
//}

//
//#include <stdio.h>
//#include <math.h>
//#define epsilon 1e-6
//int main()
//{ int s=1; double n=1,t=1,pi=0; while(fabs(t)>epsilon)
//  { pi+=t; n+=2; s=-s; t=s/n; }
//  printf("pi=%10.6f\n",pi*4);
//  return 0;
//}

//
//#include <stdio.h>
//  #include <ctype.h>
//  int main()
//  { int c;
//    while ((c=getchar())!=EOF)
//       putchar(tolower(c));
//    return 0;
//  }


#include <stdio.h>
//#include <ctype.h>
//
//int main ()
//{
//    int c;
//    while ((c=getchar())!= EOF)
//        putchar(tolower(c));
//    return 0;
//}
//       int main( )
//              {     char c,d;
//                    scanf("%c%c", &c, &d);
//                    printf("%c%c\n", c, d);
//                    return 0;
////            }
//              int main( )
//              {     int a, b;
//                    scanf("%2d⊔%*3d⊔%2d", &a, &b);
//                    printf("%d,%d\n", a, b);
//                    return 0;
//            }
//              int main( )
//              {     int a, b;
//                    scanf("%d%3d", &a, &b);
//                    printf("%d,%d\n", a, b);
//                    return 0;
////            }
//      int main( )
//              {     int day,year;
//                    char monthName[20];
//                    scanf("%d-%s%d", &day, monthName, &year);
//                    printf("%d/%s/%d", day, monthName, year);
//                    return 0;
//             }
//int main( )
//              {     double sum=0,v;
//                    while (scanf("%lf",&v)==1)
//                         printf("%.2f\n",sum+=v);
//                    return 0;
//             }
//int main() {
//    int a = 0;
//    int b = 0;
//
//    while (scanf("%d %d", &a, &b) != EOF) {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}


int main()
{
	//数组如果有n个元素，最坏的情况下要找n次
	int arr[10] = { 1,2,3,4,5,6,17,18,19,110 };
	int k = 7;//查找7
	int left = 0;
	int right = 9;
	int flag = 0;
	while (left<=right)
	{
		int mid = (left + right) / 2;//求出中间元素的下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");

	return 0;
}
