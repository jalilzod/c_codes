#include <stdio.h>
#include <stdlib.h>
//
//#define PERCANT (5.0f/100.0f)
//#define N 100
//int main(void)
//{
//	float ammount,tax,total,arr[N],arr1[N];
//	int i = 0,n = 0;
//	scanf("%f", &ammount);
//	while (ammount != 0) {
//		arr1[n++] = ammount;
//		 total = ammount * PERCANT;
//		 tax = total + ammount;
//		 arr[i++] = tax;
//		 if (i > N) {
//			 printf("Spaces is full\n");
//			 return 0;
//		 }
//
//		 scanf("%f", &ammount);
//
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		printf("before adding tax %.f\n", arr1[i]);
//	}
//
//	for (int j = 0; j < i; j++) {
//		printf("After adding tax %.f\n", arr[j]);
//	}
//
//	return 0;
//}





  #define X(x) ((x)*(x))

int main(void)
{

	int x1;
	scanf("%d", &x1);

	int  one = 3 * x1 + 2;
	int two = one * (x1 - 5);
	int three = two * (x1 - 1);
	int four = three * (x1 + 7);
	int five = four * (x1 - 6);

	printf("%d", five);

    return 0;
}
