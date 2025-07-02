#include<stdio.h>
void main()
{
    int n,bill; 
    printf("Enter the number of units:  ");
    scanf("%d",&n);
    if(n<=100)
    {
        bill = n*5;
    }
    else if(n>100 && n<=200)
    {
        bill = 500 + (n-100)*6;
    }
    else if (n>200 && n<=300)
    {
        bill = 1100 + (n-200)*7;
    }
    else 
    {
        bill = 1800 + (n-300)*8;
    }
    printf("Bill = %d",bill);
}