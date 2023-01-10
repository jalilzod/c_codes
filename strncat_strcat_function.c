#include <stdio.h>
#include <string.h>

char* strncat_1(char *x1,char *y,size_t n)
{

    char* tmp = x1;
    while(*x1)
        x1++;
    while(n--)
        if(!(*x1++=*y++)) break;
    *x1 = '\0';
    return tmp;

}
int main (void)
{
    char s1[123] = {"ABCD"};
    char s2[123] = {"EFJH"};
    printf("%s",strncat_1(s1,s2,2));
    return 0;
}

