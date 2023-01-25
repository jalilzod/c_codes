#include <stdio.h>


//first method using string index
//void strcpy(char *s,char *t)
//{
//    int i;
//    i = 0;
//    while((s[i] = t[i])!='\0')
//        i++;
//
//}

//seconf methods; using pinter
//void strcpy(char *s,char *t)
//{
//    while((*s = *t)!='\0'){
//        s++;
//        t++;
//    }
//
//}

//third method
//void strcpy(char *s, char *t)
//{
//    while((*s++=*t++)!='\0')
//        ;
//}

//fouth methods
void strcpy(char *s,char *t)
{
    while(*s++=*t++)
        ;
}
int main (void)
{
    char s[8] = { "2000" };
    char t[8] = { "1998" };
    strcpy(s, t);

    printf("after copy\ns = %s\nt = %s\n", s, t);
    return 0;
}
