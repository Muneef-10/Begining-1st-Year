#include<stdio.h>
struct person 
{
    int hp,attack;
}pikachu;
void main()
{
    struct person *x=&pikachu;
    (*x).attack=50;// pikachu.attack = 50
    printf("%d\n",(*x).attack);
    printf("%d",pikachu.attack);
}