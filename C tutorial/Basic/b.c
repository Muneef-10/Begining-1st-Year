#include<stdio.h>
void main()
{
    float ns,bp,hra,da,ta;
    printf("enter basic pay:  ");
    scanf("%f",&bp);
    hra=10*bp/100;
    ta=15*bp/100;
    da=5*bp/100;
    ns=bp+hra+da+ta;
    printf("ns=%f",ns);
}