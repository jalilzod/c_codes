#include <stdio.h>
int strIndex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i]!='\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
            if (k > 0 && t[k] == '\0')
                return i;
    }
    return -1;
}

int main(void)
{
    char s[233];
    char s1[232] = {"wer"};
        fgets(s, sizeof(s), stdin);

    printf("%d", strIndex(s, s1));

    return 0;
}
