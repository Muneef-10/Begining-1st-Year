#include<stdio.h>
#include<string.h>
struct pokemon 
{
    int hp,attack,speed;
    char tier,name[20];
}pikachu;
void change(struct pokemon*);
void main()
{
    
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");

    printf("Hp = %d\n",pikachu.hp);
    printf("Attack = %d\n",pikachu.attack);
    printf("Speed = %d\n",pikachu.speed);
    printf("Tier = %c\n",pikachu.tier);
    printf("Name = %s\n",pikachu.name);

    change(&pikachu);

    printf("Hp = %d\n",pikachu.hp);
    printf("Attack = %d\n",pikachu.attack);
    printf("Speed = %d\n",pikachu.speed);
    printf("Tier = %c\n",pikachu.tier);
    printf("Name = %s\n",pikachu.name);
}

void change(struct pokemon *p)
{
    //(*p).hp=50;
    p->hp=70;   // same meaning like (*p).hp
    (*p).attack=90;
    (*p).speed=80;
    (*p).tier='S';
    strcpy(p->name,"Charizard");
}
