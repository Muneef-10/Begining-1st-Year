#include<stdio.h>
#include<string.h>
struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } a ;

void fun(struct pokemon x)
{
    printf("%d",x.hp);
}

    
void main()
{
    a.hp=100;
    fun(a);
}