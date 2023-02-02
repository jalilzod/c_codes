#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//criate 4 random numbers and save them into x arr
void make4dgt(int x[])
{
	int i, j, val;
	for (i = 0;i < 4; i++) {
		do {
			val = rand() % 10; //make random numbers, from 0--9
			for (j = 0; j < i; j++) //determine whether number already exist
				if (val == x[j])
					break;
		} while (j < i);//loop until the new numbers;
		x[i] = val;
	}
}

//determine whther the character is valid
int check(const char s[])
{
	int i, j;
	if (strlen(s) != 4) //the length of string is not 4
		return 1;
	for (i = 0; i < 4; i++) {
		if(!isdigit(s[i])) //contains non digits chars
			return 2;
			for(j=0;j<i;j++)
				if(s[i]==s[j])//contains the same chars
					return 3;
	}
	return 0;//valid characters
}

void judge(const char s[], const int no[], int* hit, int* blow) {
	int i, j;
	*hit = *blow = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (s[i] == '0' + no[j])//numbers are the same
				if (i == j)
					(*hit)++; //hit position is the same
				else
					(*blow)++;//blow position is not the same
		}
	}
}

//shows the result
void print_result(int snum, int spos)
{
	if (spos == 4)
		printf("The correct answer!!\n");
	else if (snum == 0)
		printf(" These numbers doesn't contains the numbers of answer\n");
	else {
		printf("These numbers contains %d numbers of answer's numbers!!\n", snum);

		if (spos == 0)
			printf("The numbers are not in proper position\n");
		else
			printf("%d numbers position are correct\n", spos);
	}
	putchar('\n');
}

int main(void)
{
	int try_no = 0; //input numbers
	int chk; //the result of already checked numbers
	int hit; //the correct numbers
	int blow;//correct numbers but incorrect positions
	int no[4];//the string which should be guessed
	char buff[10];
	clock_t start, end;//the beginig and end of the time

	srand(time(NULL));//set up the time
	puts("Let's play Mastermind ");
	puts("Gess 4 numbers ");
	puts("The shouldn't contain the same numbers ");
	puts("Please enter numbers like this one 4307 ");
	puts("White spaces can't be entered ");


	make4dgt(no);
	start = clock();
	do {
		do {
			printf("Please enter: ");
			scanf("%s", buff);
			chk = check(buff);

			switch (chk) {
			case 1:puts("\aMake sure you enter 4 numbers "); break;
			case 2:puts("\aPlaese only enter numbers "); break;
			case 3:puts("\aPlease don't enter the same numbers "); break;
			}
		} while (chk != 0);
		try_no++;
		judge(buff, no, &hit, &blow);//determine
		print_result(hit + blow, hit);//shows the result

	} while (hit < 4);
	end = clock();
	printf("You've used %d tries\nAnd %lf sec\n", try_no, (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
