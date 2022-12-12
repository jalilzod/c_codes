#include <stdio.h>

int main()
{
    int age = 0;
    printf("Please enter your age :>>");
    scanf("%d", &age);

    long long int second = age * 3.156e7;//3.156*10^7

    printf("You have left<<%lld>> seconds , Please don't waste your time", second);


    return 0;
}
