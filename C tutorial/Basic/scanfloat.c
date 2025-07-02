#include<stdio.h>
void main()
{
    float a,b,c,d,sum,mul,div,sub;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    printf("Enter the value of d: ");
    scanf("%f",&d);
    sum=a+b+c+d;
    mul=a*b*c*d;
    div=a/b/c/d;
    sub=a-b-c-d;
    printf("sum=%f\nmul=%f\ndiv=%f\nsub=%f",sum,mul,div,sub);
}