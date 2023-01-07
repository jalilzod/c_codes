#include <stdio.h>

int main(void)
{
	int ali = 178; //height of ali
	int jon = 180;//height of jon
	int men = 169;//height of men

	int* aziz, * azam;
	aziz = &ali;    //aziz point to ali
	azam = &jon; //azam point to jon

	printf("the height of aziz %d\n", *aziz);
	printf("the height of azam %d\n", *azam);

	aziz = &men;  //aziz point to men
	*azam = 190;//azam point to 190
	putchar('\n');

	printf("the hetght of ali %d\n", ali);
	printf("the hetght of jon %d\n", jon);
	printf("the hetght of men %d\n", men);
	printf("the hetght of aziz %d\n", *aziz);
	printf("the hetght of azam %d\n", *azam);

	return 0;
}
