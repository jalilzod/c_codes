
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *marks;
	printf("Enter student's number\n");

	marks = (int*)malloc(5 * sizeof(int));
	if (marks == NULL) {
		printf("Erro,couldn't allocate storage\a");
		return 0;
	}
	int i;

	marks = (int*)realloc(marks, 5*sizeof(int));
	if (marks == NULL) {
		printf("Error,\a");
		return 0;
	}
	printf("Enter score of student's\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", marks + i);
		if (*marks < *(marks + i)) {
			*marks = *(marks + i);
		}
	}


	printf("The score of studen's are: \n");
	for (i = 0; i < 5; i++) {
		printf("The score of %d studen is %d\n", i + 1, *(marks + i));

	}
	printf("The max score is %d\n", *marks);


    free(marks);
	return 0;
}
