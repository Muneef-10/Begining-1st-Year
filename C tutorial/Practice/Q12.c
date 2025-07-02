#include<stdio.h>
void rev(int x,int y)
{
    int temp=y;
    y=x;
    x=temp;
}
void main()
{
    int a=8;
    int b=6;
    rev(a,b);
    printf("a=%d\nb=%d",a,b);
}