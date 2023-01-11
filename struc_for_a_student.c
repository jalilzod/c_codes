#include <string.h>
#define NAME 64

struct student {  // struct of students
	char name[NAME];
	int height;
	float weight;
	long scholars;
};
int main(void)
{
	struct student anas;
	strcpy(anas.name, "Anis");
	anas.height = 178;
	anas.weight = 64.5;
	anas.scholars = 3000;

	printf("The name of student = %s\n", anas.name);
	printf("The height of student = %d\n", anas.height);
	printf("The weight of student = %.1f\n", anas.weight);
	printf("The scholarship of student = %ld\n", anas.scholars);

	return 0;
}
