#include <stdio.h>
#include <ctype.h>

double my_atof(char s[])
{
    double val,power;
    int sign,i;
    for(i=0;isspace(s[i]);i++) //skiping spaces
        i++;
    sign = (s[i]=='-')?-1:1; //for signs
    if(s[i]=='-'||s[i]=='+')
        i++;

    for(val = 0.0;isdigit(s[i]);i++) //for numbers
        val = val*10+(s[i]-'0');

    if(s[i]=='.') //for point numbers
        i++;

    for(power = 1.0;isdigit(s[i]);i++){
        val = val*10+(s[i]-'0');
         power*=10;
    }
    return sign * val / power;

}

int main (void)
{
    char s[100];
    scanf("%s",s);
    printf("%lf",my_atof(s));

    return 0;
}
