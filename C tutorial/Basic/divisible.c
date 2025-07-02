#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number:  ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
        printf("Number is divisible by both 5 and 11");
    }
    else if(a%5==0)
    {
        printf("Number is divisible by 5");
    }
    else if(a%11==0)
    {
        printf("Number is divisible by 11");
    }
    else
    {
        printf("Number is neither divisible by 5 nor 11");
    }
}