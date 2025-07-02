#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("Trinagle is equilateral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Triangle is Isocelene");
    }
    else
    {
        printf("Triangle is Scalene");
    }
}