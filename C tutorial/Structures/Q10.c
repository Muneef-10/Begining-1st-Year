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

    typedef struct legendrypokemon
    {
        pokemon normal;
        char ability[10];
    } lp ;

    lp mewtwo;
    mewtwo.normal.attack=50;
    printf("%d",mewtwo.normal.attack);
}