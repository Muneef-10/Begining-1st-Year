#include<stdio.h>
void main()
{
    float nm,y,bill;
    printf("Enter the values of no. of  mango:  ");
    scanf("%f",&nm);
    printf("Enter the values of known year:  ");
    scanf("%f",&y);
    bill=nm*5;
    if(nm>10&&y>2)
    {
        bill=0.9*bill;
    }
    printf("Bill=%f",bill);
}