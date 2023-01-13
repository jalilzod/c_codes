#include <stdio.h>

#include <string.h>
#define NUMBER 5
#define NAME_L 64
//struct if studets
typedef struct {
	char name[NAME_L];
	int height;
	float weight;
	long scholars;
}Student;

void swap_Student(Student* x, Student* y)  //Swap x and y directed to Student
{
	Student tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_by_height(Student a[], int n)  //regarding height bubble sort student a array's n  value
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1].height > a[j].height)  //regarding height find higher one
			swap_Student(&a[j - 1], &a[j]); //swap all value of array
		}
	}
}

int main(void)
{
	int i;
	Student std[] = {
		{ "ANAS",178,89.3,132132 },
		{ "MING",150,56.4, 4565442 },
		{ "YUAN",179,90.6,32132 },
		{ "YANG",170,65.0,76132 },
		{ "MAYI",175,69.6,782132 } };

	for(i = 0; i < NUMBER; i++)
		printf("%-8s %6d %6.1lf% 7ld\n", std[i].name, std[i].height, std[i].weight, std[i].scholars);
	sort_by_height(std, NUMBER); //sort regarding the height

	puts("regording heigth sorted:\n");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s  %6d %6.1lf% 7ld\n", std[i].name, std[i].height, std[i].weight, std[i].scholars);

	return 0;
}
