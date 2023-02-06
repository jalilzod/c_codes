#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,*marks;
	printf("Enter student's number\n");
	scanf("%d", &n);

	marks = (int*)malloc(n * sizeof(int));
    if(marks==NULL){
        printf("allocat storage faild\n");
        return 0;
        }
    printf("Enter score of student's\n");
    for(int i = 0;i<n;i++){
        scanf("%d",marks+i);
    }
    printf("The score of student's are\n");
    for(int i=0;i<n;i++){
        printf("The %d student's score is %d\n",i+1,*(marks+i));
    }
    free(marks);

	return 0;
}
