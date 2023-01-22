#include <stdio.h>
#define MAXLINE 1000
char pattern[] = "mard";

int getline(char s[],int lim) //save line into s and return the
{                             //length of the line
    int c,i;
    i = 0;
    while(--lim>0&&(c = getchar())!=EOF&&c!='\0'){
        s[i++] = c;
        if(c=='\n')
            s[i++] = c;
        s[i] = '\0';
        return i;
    }

}
int strindex(char s[],char t[]) //return t int the s position
{                               //if no found return -1
    int i,j,k;
    for(i=0;s[i]!='\0';i++){
        for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
            ;
        if(k>0&&t[k]=='\0')
            return i;
    }
    return -1;
}
int main (void)
{
    char line[MAXLINE];
    int found = 0;
    while(getline(line,MAXLINE)>0)
    if(strindex(line,pattern)>=0){
        printf("%s",line);
        found++;
    }
    return found;
}
