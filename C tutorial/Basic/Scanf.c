#include<stdio.h>
void main()
{
    int a,b,c,sum,mul;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    sum=a+b+c;
    mul=a*b*c;
    printf("sum=%d\nmul=%d",sum,mul);
}