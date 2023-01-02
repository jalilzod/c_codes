#include <stdio.h>

enum animal {Dog,Cat,Monkey,INVALID};

void dog(void)
{
    puts("AffAff!!");

}
void cat(void)
{
    puts("Mao~~~!");
}
void monkey(void)
{
    puts("HeHee!!");

}
enum animal select(void)
{
    enum animal tmp;
    do{
        printf("0--dog 1--cat 2--monkey 3--finish\n");
        scanf("%d",&tmp);
    }while(tmp<Dog||tmp>INVALID);
    return tmp;
}

int main (void)
{
    enum animal selected;
    do{
        switch(selected=select()){
        case Dog  :dog(); break;
        case Cat  :cat(); break;
        case Monkey  :monkey(); break;
        }

    }while(selected!=INVALID);

    return 0;
}
