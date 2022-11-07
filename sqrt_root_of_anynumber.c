//#include <stdio.h>
//double Pow(int n, int k)
//{
//  if (k == 0)
//        return 1.0;
//  else if (k > 0)
//    return n * Pow(n, k - 1);
//  else
//    return 1.0 / Pow(n, -k);
//}
//
//int main ()
//
//{
//    int n = 0;
//    int k = 0;
//
//    double ret = 0.0;
//    scanf("%d%d", &n, &k);
//    ret = Pow(n, k);
//    printf("%lf\n", ret);
//
//    return 0;
//}

#include <stdio.h>

double Pow(int n, int k)
{
    if (k == 0)
        return 1.0;
    else if (k > 0)
        return n * Pow(n, k-1);
    else
        return 1.0 / (n, -k);
}

int main ()

{
    int n = 0;
    int k = 0;
    double ret = 0.0;

    scanf("%d %d", &n, &k);
    ret = Pow(n, k);
    printf("%.10lf\n",ret);


    return 0;
}
