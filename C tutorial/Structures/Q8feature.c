#include<stdio.h>
#include<string.h>
void main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon ;
    pokemon a,b,c;
    a.attack = 50;
    a.hp = 100;
    a.speed = 30;
    a.tier = 'A';
    strcpy(a.name,"Charizard");

    b=a;
    
    printf("%d\n",b.attack);
    printf("%s",b.name);

}