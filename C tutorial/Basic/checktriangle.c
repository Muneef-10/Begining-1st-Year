#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Triangle  is Valid");
    }
    else 
    {
        printf("Triangle is Invalid");
    }
}