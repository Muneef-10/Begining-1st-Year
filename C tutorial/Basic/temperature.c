#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter the value of temperture in farenhite:  ");
    scanf("%f",&f);
    c=((f-32)*5/9);
    printf("Temperature in celsius=%f",c);
}