// Stucture is user defined data type (Multiple attribute of differnet types)

#include<stdio.h>
void main()
{
    struct pokemon // User defined data type
    {
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D,G
    }; // ';' mandatory
    struct pokemon pikachu;
    printf("Enter the attack of pikachu: ");
    scanf("%d",&pikachu.attack);
    //pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("Pikachu attack is: %d\n",pikachu.attack);

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';
    printf("Mewtwo attack is: %d",mewtwo.attack);
}