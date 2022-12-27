#include <stdio.h>

#define NUMBER 5
int student[NUMBER];

int min_of(const int v[],int n)
{
	int i = 0;
	int min = v[0];
	for (i = 0; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}
int main(void)
{
	int i = 0;
	int student[NUMBER];
	int min;

	printf("Enter %d number student's score:\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("%d: ", i + 1);
			scanf("%d", &student[i]);
	}
	min = min_of(student, NUMBER);
	printf("%d", min);

	return 0;
}
