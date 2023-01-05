#include <stdio.h>
int str_length(const char x[])
{
    int len = 0;
    while(x[len])
        len++;
    return len;
}
int main (void)
{
    char s[123];
    printf("Enter string charcter: ");
    scanf("%s",s);

    printf("%s string's length is: %d\n",s,str_length(s));

    return 0;
}
