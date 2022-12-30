#include <stdio.h>

//put matrix a and b into c matrix
void mat_add(const int a[4][3],const int b[4][3],int c[4][3])
{
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++)
            c[i][j] = a[i][j] + b[i][j];
    }

}
void mat_print(const int m[4][3]) //print matrix m
{
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++)
            printf("%4d",m[i][j]);
            putchar('\n');
    }


}

int main (void)
{
    int st1[4][3] = {{45,56,76},{45,56,67},{56,67,78},{56,67,78}};
    int st2[4][3] = {{65,54,73},{49,58,67},{56,65,74},{54,66,79}};
    int sum[4][3];// sum of two exam
    mat_add(st1,st2,sum); //find the sum of exams
    puts("The first score:"); mat_print(st1); //print the fiesr score
    puts("The second score:"); mat_print(st2);
    puts("The sum of exams score:"); mat_print(sum); //print the sum

    return 0;
}
