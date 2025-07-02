#include<stdio.h>
void main()
{
    int h,s,m;
    printf("Enter the value of second:  ");
    scanf("%d",&s);
    h=s/3600;
    m=(s/60)%60;
    s=s%60;
    printf("hour=%d\nmin=%d\nsec=%d",h,m,s);
}