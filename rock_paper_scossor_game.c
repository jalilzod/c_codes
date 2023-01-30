#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    int human;
    int comp;
    int judge;
    int retry;
    srand(time(NULL));
    printf("Game has started!!\n");

    do{
        comp = rand()%3;
        do{
            printf("Chose\nRock[0]----Scissor[1]----Paper[2]\n");
            scanf("%d",&human);
        }while(human<0||human>2);
        printf("mine is\n");
        switch(comp){
         case 0:printf("Rock\n");break;
         case 1:printf("Scissor\n");break;
         case 2:printf("Paper\n");break;
        }
        printf("Yours is\n");

        switch(human){
        case 0:printf("Rock\n");break;
        case 1:printf("Scissor\n");break;
        case 2:printf("Paper\n");break;
        }
        judge = (human-comp+3)%3;

        switch(judge){
        case 0:printf("Tie\n");break;
        case 1:printf("You lost\n");break;
        case 2:printf("You won\n");break;
        }

        printf("Wanna more time?Yes[1]------No[0]\n");
        scanf("%d",&retry);
    }while(retry==1);

    return 0;
}
