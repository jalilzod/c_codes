#include <stdio.h>

void searCH(char arr[], char sear, char** p)
{
    int i;
    for (i = 0; *(arr + 1)!='\0'; i++) {
        if (*(arr + i) == sear) {
            *p = arr + i;
            break;
        }
        else if (*(arr + 1) == 0)
        {
            *p = 0;
            break;
        }
    }

}

int main(void)
{
    char str[] = { "meravabvsddfsdfs\0" };
    char a = 'v';
    char* p = 0;

    searCH(str, a, &p);
    if (p == 0)
    {
        printf("Not Found!!");
    }
    else {
        printf("Has found p = %x\n", p);
    }

    return 0;
}
