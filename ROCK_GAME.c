#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int human;
int comp;
int win_no;
int lose_no;
int draw_no;
const char* str[] = { "Rock","Scissor","Paper" };

//initialize
void init(void)
{
	win_no = 0;
	lose_no = 0;
	draw_no = 0;
	srand(time(NULL));
	printf("Game is started!!\n");
}
//the procces of the game

void prcc(void)
{
	int i;
	comp = rand() % 3;
	do {
		printf("\nRock Scissor Paper");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, str[i]);
		printf(":");
		scanf("%d", &human);
	} while (human < 0 || human>2);

}
//count draws loses,and wins
void cnt(int result)
{
	switch (result) {
	case 0:draw_no++; break;
	case 1:lose_no++; break;
	case 2:win_no++; break;
	}
}
//show the result of current game
void res(int result)
{
	switch (result) {
	case 0:printf("Draw\n"); break;
	case 1:printf("You lost\n"); break;
	case 2:printf("You won\n"); break;
	}
}

//determine whether continue the game
int conf(void)
{
	int x;
	printf("Wanna more tries? YES---[1]******No---[0]\n");
	scanf("%d", &x);
	return x;
}

int main(void)
{
	int judge;
	int retry;
	init();
	do {
		prcc();

		printf("mine is %s,yours is %s\n", str[comp], str[human]);
		judge = (human - comp + 3) % 3;
		cnt(judge);
		res(judge);
		retry = conf();
	} while (retry == 1);
	printf("%d Wins, %d loses, %d Draws\n", win_no, lose_no, draw_no);

	return 0;
}
