#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int a,b,c;
    int x;
    int n;
    clock_t start,end;
    int stage = 0;
    srand(time(NULL));

    printf("Brain game has been started!!\n");
    start = clock();

    for(stage = 0;stage<10;stage++){
        a = 10 + rand() % 90;
        b = 10 + rand() % 90;
        c = 10 + rand() % 90;
        n = rand() % 17;
        printf("%d%*s+%*s%d%*s+%*s%d",a,n,"",n,"",b,n,"",n,"",c);
        do{
            scanf("%d", &x);
            if(x == a + b + c)
                break;
            printf("Wrong!!Enter again!! ");
        }while(1);
    }
    end = clock();
    printf("You've used %.1lf sec\n",(double)(end-start)/CLOCKS_PER_SEC);


  return 0;
}
