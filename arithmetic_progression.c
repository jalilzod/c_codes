//#include <stdio.h>
//#include <math.h>
//
//void myfunction(int a, int b, int n)
//{
//    int i;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += a + i * b;
//    }
//    printf("%d", sum);
//}
//
//int main (void)
//{
//    int a,b,n;
//    scanf("%d%d%d",&a,&b,&n);
//    myfunction(a,b,n);
//
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[100];
    int temp;
    int flag;
    int n,m;
    int i,j;
    int num;
    scanf("%d", &n);
    for(;n > 0;n--)
    {
        while(scanf("%d", &m) != EOF)
        {
            for(i=0;i < m;i++)
        {
            scanf("%d", &a[i]);
        }
        for(i=0;i < m-1;i++)
        {
            for(j=0;j < m - 1 -i;j++)
            {
                if(a[j] > a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }//起泡法排序
        num = a[1] - a[0];
        for(i = 0; i+1 < m;i++)
        {
            if(a[i+1] - a[i] == num)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("yes\n");
        else if(flag == 0)
            printf("no\n");
        }
    }
}
