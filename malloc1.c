#include <malloc.h>
#include <stdlib.h>
typedef struct Score
{
	int a;
	int arr[];
}Score;
int main(void)
{
	Score* st = (Score*)malloc(sizeof(st) + 10 * sizeof(int));

	if (st == NULL) {
		printf("Malloc::Error ");
		return 1;
	}
	else {
		int i;
		for (i = 0; i < 10; i++)
			printf("%d", i + 1);
			scanf("%d", st->arr[i]);

			for (i = 0; i < 10; i++)
				printf("%d", st->arr[i]);

	}


	free(st);
	st = NULL;

	return 0;
}
