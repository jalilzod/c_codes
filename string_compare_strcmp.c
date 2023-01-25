#include <stdio.h>
//#01
//int strcmp(char *s, char *t) //using index of string
//{
//    int i;
//    for(i=0;s[i]==t[i];i++) //for loop
//    if(s[i]=='\0')
//        return 0;
//    return s[i]-t[i]; //give us the greater one
//                      //if s is greater then t result will be postivie
//}                     //else resukt will be negative if the same then 0

//int strcmp(char *s, char *t)
//{
//    for(; *s==*t;s++, t++) //using pointer
//        if(*s == '\0')
//        return 0;
//    return *s - *t;
//
//}

int strcmp(char *s, char *t)
{
    while(*s==*t){
        s++;
        t++;
   }
   if(*s=='\0')
    return 0;
   return *s - *t;
}
int main (void)
{
    char s[5] = {"abcd"};
    char t[5] = {"abcc"};

    printf("%d",strcmp(s,t));
    return 0;
}
