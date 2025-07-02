#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    //swapping begins from here

    c=a;
    a=b;
    b=c;
    printf("After swapping the values of variables:::\n");
    printf("a=%d\nb=%d",a,b);
}