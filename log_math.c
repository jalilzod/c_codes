//#include <stdio.h>
//#include <math.h>
//
//int main ()
//{
//    double b = 0.0;
//    double number = 0.0;
//     double sqrt;
//    scanf("%lflf",&b,&number);
//    double log = sqrt(number);
//
//    printf("%.6lf\n",log);
//
//
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double x = 0.0;
//    double num = 0.0, result;
//    scanf("%lf%lf",&x,&num);
//    result = log(num);
//    printf("log(%.1f) = %.6lf", num, result);
//
//    return 0;
//}

//int main ()
//
//{
//    unsigned d = 0;
//    int i = 0,k;
//    while(s[i])
//    {
//
//        if(s[i]>='0' && s[i]<='9')
//            k = s[i]-'0';
//        else if(s[i]>='A' && s[i]<='F')
//            k = s[i]-'A'+10;
//        else k = s[i]-'a'+10;
//        d = d*16+k;
//        i++;
//    }
//    return d;
//}


//int main ()
//{
//    int n ,r = 0;
//    scanf("%d",&n);
//    do{
//        r = r*2+n%2;
//        n/=2;
//
//    }while (n!=0);
//    printf("%d\n",r);
//
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//void del(char s[])
//{
//   int i,j;
//   for(i = j =0;s[i]!='\0';i++)
//   {
//       if(s[i]!=' ')
//        s[j++] = s[i];// 函数实现
//   }
//   s[j] = '\0';
//}
//int main()
//{
//    char s[110000];
//    gets(s);  //输入一行字符
//    del(s);
//    printf("%s\n",s);
//    return 0;
//}


//#include <stdio.h>

//int main ()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d",&n);
//
//    while (n)
//    {
//        n/=10;
//        count++;
//    }
//    printf("%d",count);
//    return 0;
//}
//int Numberof1(int n)
//{
//    int count = 0;
//    int i = 0;
//    for(i=0;i<32;i++)
//    {
//
//        if(((n>>i)&1)==1)
//        {
//
//            count++;
//        }
//    }
//    return count;
//}
//int main ()
//{
//    int n = 0;
//    scanf("%d",&n);
//
//    int ret = Numberof1(n);
//    printf("%d\n",ret);
//    return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int n, temp, k;
 int a[100];
 int flag = 0;
 while (scanf("%d", &n) != EOF)
 {
  for (int i = 0; i < n; i++)
   scanf("%d", &a[i]);
  //冒泡排序，对所输入的数进行从小到达排序
  for (int i = 0; i < n; i++)
   for (int j = 0; j< n - 1 - i; j++)
    if (a[j]>a[j + 1])
    {
     temp = a[j];
     a[j] = a[j + 1];
     a[j + 1] = temp;
    }

  k = 0;
  while (k + 2 < n)  //利用k+2<n作为判断语句可防止越界
  {
   if (a[k + 1] - a[k] == a[k + 2] - a[k + 1])
   {
    flag = 1;
   }
   else {
    flag = 0;
   }
   k++;
  }

  if (flag == 1)
   printf("yes\n");
  else
   printf("no\n");
 }
 return 0;
}
