#include <stdio.h>

#define SNUMBER 10 //student's number;

int max_of(int x[],int n)
{
   int i = 0;
   int max = x[0];
   for(i=0;i<SNUMBER;i++)
    if(x[i]>max)
    max = x[i];
   return max;

}

int main (void)
{
    int i = 0;
    int eng[SNUMBER];
    int math[SNUMBER];
    int scienc[SNUMBER];
    int chinese[SNUMBER];
    int max_en,max_mat,max_sc,max_ch;

    printf("Enter %d student's score:\n",SNUMBER);
    for(i=0;i<SNUMBER;i++){
        printf("English[%d] ",i+1);scanf("%d",&eng[i]);
        printf("    math:");scanf("%d",&math[i]);
        printf("    scienc:");scanf("%d",&scienc[i]);
        printf("    chinese:");scanf("%d",&chinese[i]);

    }

    max_en = max_of(eng,SNUMBER);
    max_mat = max_of(math,SNUMBER);
    max_sc = max_of(scienc,SNUMBER);
    max_ch = max_of(chinese,SNUMBER);
    printf("Max of english is:%d\nMax of math is %d:\n",max_en,max_mat);
    printf("Max of scienc is:%d\nMax of chinese is %d:\n",max_sc,max_ch);
    return 0;
}
