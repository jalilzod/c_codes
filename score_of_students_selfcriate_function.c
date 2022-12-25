#include <stdio.h>

#define NUMBER 8
int students[NUMBER];
int top (void);
int min (void);

int top(void)
{

    extern int students[];
    int i = 0;
    int max = students[0];
    for(i=0;i<NUMBER;i++)
        if(students[i]>max)
        max = students[i];
    return max;
}

int min(void)
{
    extern int students[];
    int i = 0;
    int min = students[0];

    for(i=0;i<NUMBER;i++)
        if(students[i]<min)
        min = students[i];
    return min;
}
int main (void)
{
    extern int students[];
    int i;
    printf("Enter %d student's score\n",NUMBER);
    for(i=0;i<NUMBER;i++){
        printf("%d:",i+1);
        scanf("%d",&students[i]);
    }
    printf("The top student's score is %d\nThe losser student's score is %d\n",top(),min());

    return 0;
}
