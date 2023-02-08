#include <stdio.h>

char* strcpy(char* s1, char* s2)

{
    char* p = s1;
    while (*s1++ = *s2++)
        ;
    return p;
}
int main(voids)
{
    char s1[100] = { "21121" };
    char s2[5] = { "1212" };
    strcpy(s1, s2);
    strcat(s1, s2);
    printf("%s\n", s1);
    printf("%s", s1);

    return 0;
}
