#include <stdio.h>

#include <ctype.h>
int getInt() {
    char ch = getchar();
    while (!isdigit(ch)) ch = getchar();
    int num = 0;
    while (isdigit(ch)) {
        num = num * 10 + ch - '0';
        ch = getchar();
    }
    return num;
}

int main(void)
{
    int m1, c1, m2, c2, msum, csum, getInt();
    printf("Enter first length ");
    m1 = getInt();
    c1 = getInt();
    printf("Enter the second length ");
    m2 = getInt();
    c2 = getInt();

    msum = m1 + m2;
    csum = c1 + c2;

    if (csum >= 100) {
        csum = csum - 100;
        msum = msum + 1;
    }
    printf("Sum is %dm % c\n", msum, csum);
    return 0;
}
