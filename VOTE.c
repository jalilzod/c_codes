#include <stdio.h>
#include <string.h>

#define MaxLen 30
#define Condit 7
FILE* in, * out;

void init(char name[][MaxLen + 1],int vote[])
{
	char Lastname[MaxLen];
	for (int i = 1; i <= Condit; i++) {
		fscanf(in, "%s %s", name[i], Lastname);
		strcat(name[i], " ");
		strcat(name[i], Lastname);
		vote[i] = 0;
	}
}
int getlarg(int a[], int left, int right)
{
	int i;
	int big = 0;
	for (i = left + 1; i <= right; i++)
		if (a[i] > a[big]) big = i;
	return big;
}

void print(char name[][MaxLen + 1], int vote[],int valid,int unvalid)
{
	fprintf(out, "\nNumber of votes :%d\n", valid + unvalid);
	fprintf(out, "Number of Valid votes :%d\n", valid );
	fprintf(out, "Number of Unvalid votes :%d\n", unvalid);
	fprintf(out, "\nCandidets            score\n\n\n");
	for (int i = 1; i <= Condit; i++)
		fprintf(out, "% -15s %3d\n", name[i], vote[i]);
		fprintf(out, "\nThe winner (s)\n");
		int win = getlarg(vote, 1, Condit);
		int winningvote = vote[win];
		for (int i = 1; i <= Condit; i++)
			if (vote[i] == winningvote) fprintf(out, "%s\n", name[i]);
}

int main(void)
{
	char name[MaxLen + 1][MaxLen + 1];
	int vote[Condit + 1];
	int i, valid = 0, unvalid = 0;
	in = fopen("condit.txt", "r");
	out = fopen("result.txt", "w");
	init(name, vote);
	fscanf(in, "%d", &i);
	while (i != 0) {
		if (i<1 || i>Condit) {
			fprintf(out, "Invalid vote", i);
			++unvalid;
		}
		else {
			++vote[i];
			++valid;
		}
		fscanf(in, "%d", &i);
	}
	print(name, vote, valid, unvalid);

	fclose(in);
	fclose(out);

	return 0;
}
