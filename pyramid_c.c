#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    int i = 1;
    int j, g;
    for (i = 1;i < 6; i++)
       {
    for(j = 5 - i; j > 0; j--)
        {
            printf(" ");
        }
               for (g = 0; g < i; g++)
               {
                     printf("%c ", a);
                 }
             printf("\n");
            }
        return 0;

}
