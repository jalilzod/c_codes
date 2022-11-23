  #include <stdio.h>
int Number0f1(int n)
{
    int i = 0;
    int count = 0;
    for(i = 0; i < 32;i++)
    {
        if(((n>>i)&1)==1){
            count++;
        }
    }
    return count;
}
int main ()
{
    int n = 0;
    scanf("%d",&n);

    int ret = Number0f1(n);

    printf("%d",ret);

    return 0;
}



//
//int differ_numb(int m,int n)
//{
//    int i = 0;
//    int count = 0;
//    for(i = 0;i<32;i++)
//    {
//        if(((m>>i)&1)!=((n>>i)&1))
//        {
//            count++;
//        }
//
//    }
//     return count;
//
//}
//int main ()
//{
//   int m = 0;
//   int n = 0;
//
//   scanf("%d%d",&m,&n);
//   int ret = differ_numb(m,n);
//
//   printf("%d\n",ret);
//
//   return 0;
//}
