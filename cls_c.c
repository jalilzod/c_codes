#include <stdio.h>

int main()
//{
//	int mat[3][3], i, j, n;
//	n = 0;
//	printf("Please enter 9 element of 3*3 Matrix:>\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &mat[i][j]);
//			n += mat[i][j];
//		}
//	}
//	printf("n = %d\n", n);
//	return 0;
//}
{
	int A = 0;
	int B = 0;
	int dev = 0;
	scanf("%d%d", &A, &B);
	dev = (A > B) ? A : B;
	while (1)
	{
		if ((dev % A == 0) && (dev % B == 0))
		{
			printf("%d\n", dev);
			break;
		}
		dev++;
	}

	return 0;
}
