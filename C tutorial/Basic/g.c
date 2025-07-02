#include<stdio.h>
void main()
{
    int u, bill;
    printf("Enter the number of units:  ");
    scanf("%d",&u);
    if(u<=100)
    {
        bill=u*5;
    }
    else if(u>100&&u<=200)
    {
        bill=u*6;
    }
    else if(u>200&&u<=300)
    {
        bill=u*7;
    }
    else
    {
        bill=u*8;
    }
    printf("%d",bill);
}