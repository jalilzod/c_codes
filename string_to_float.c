#include <stdio.h>
#include <ctype.h>
double strTofloat(char s[])
{
    int sign,i;
    double pow,val;

    for(i=0;isspace(s[i]);i++)
        ;
    sign = (s[i]=='-')?-1:1;
    if(s[i]=='-'||s[i]=='+')
        i++;

    for(val= 0.0;isdigit(s[i]);i++)
        val = val*10+(s[i]-'0');

    if(s[i]=='.')
        i++;

    for(pow=1.0;isdigit(s[i]);i++){
        val = val*10+(s[i]-'0');
    pow*=10;

    }
    return sign*val/pow;

}
int main(void)
{
    char s[127];
    fgets(s,sizeof(s),stdin);

    printf("%lf",strTofloat(s));

    return 0;
}
