#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter three no.s:  ");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    printf("largest no. =  %d",max);
}