#include <stdio.h>
#include <string.h>
#define R 5
#define C 30

void sortingStr(int low, int high, int max, char name[][C+1], int idi[])
{
	char key[C+1];
	for (int i = low + 1; i <= high; i++) {
		strcpy(key, name[i]);
		int m = idi[i];
		int j = i - 1;
		while (j >= low && strcmp(key, name[j]) < 0) {
			strcpy(name[j + 1], name[j]);
			idi[j + 1] = idi[j];
			--j;
		}
		strcpy(name[j + 1], key);
		idi[j + 1] = m;
	}
}

int main(void)
{
	char name[R][C];// = {"aziz,kah","jahde,eded","uedhua,eade","iueaud,eded","aiz,abula","heja,haja"};
	int idi[R];
	int i;
	char input[C];

	for (i = 0; i < R; i++) {
		fgets(input, C, stdin);
		input[strcspn(input, "\n")] = '\0';//finde the position '\n' and replace it with '\0';
		strcpy(name[i], input);
	}

	printf("Enter id");
	for (i = 0; i < R; i++) {
		scanf("%d", &idi[i]);
	}


	sortingStr(0, R - 1, C + 1, name, idi);

	for (i = 0; i < R; i++) {
		printf("%s  %d\n", name[i], idi[i]);
	}



	return 0;
}
