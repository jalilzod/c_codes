#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sleep(unsigned long x)
{

    clock_t c1 = clock(),c2;
    do{
        if((c2=clock())==(clock_t)-1)
            return 0;
    }while(1000.0*(c2-c1)/CLOCKS_PER_SEC<x);
    return 1;
}
int main (void)
{
    int retry;
    int retry2;
    int loses = 0;
    int success = 0;
    clock_t start,end;
    srand(time(NULL));
    printf("In this game you should remember a number\n");
    start = clock();
    do{
        printf("How many times you wanna play? \n");
        scanf("%d",&retry);
        while(retry-->0){
            int x;
            int no = rand()%9000+1000;

            printf("%d",no);
            fflush(stdout);
            sleep(500);
            printf("\rEnter number ");
            scanf("%d",&x);
            fflush(stdout);

            if(x!=no){
                printf("Wrong ");
                loses++;
            }else {
                printf("Right ");
                success++;
            }
        }
        end = clock();
        printf("\n%d loses %d successes\n",loses,success);
        printf("You've used %.1lf sec\n",(double)(end-start)/CLOCKS_PER_SEC);

        printf("Wanna try more times?\nYES---[1]/NO---[0]\n");
        scanf("%d",&retry2);
    }while(retry2==1);

    return 0;
}
