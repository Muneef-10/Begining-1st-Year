//ARRAY 

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

    pokemon a[3];
    a[0].attack = 50;
    a[0].hp = 100;
    a[0].speed = 30;
    a[0].tier = 'A';
    strcpy(a[0].name,"Charizard");

    a[1].attack = 150;
    a[1].hp = 100;
    a[1].speed = 130;
    a[1].tier = 'S';
    strcpy(a[1].name,"Mewtwo");

    a[2].attack = 50;
    a[2].hp = 30;
    a[2].speed = 80;
    a[2].tier = 'B';
    strcpy(a[2].name,"Pikachu");

    for (int i = 0; i < 3; i++)
    {
        printf("Name:-%s\n",a[i].name);
        printf("Attack:-%d\n",a[i].attack);
        printf("H.P:-%d\n",a[i].hp);
        printf("Speed:-%d\n",a[i].speed);
        printf("Tier:-%c\n",a[i].tier);
    }
    
}