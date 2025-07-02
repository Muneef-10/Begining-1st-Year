//WAP to input 2 integer number then pass these no.s to a function & return sum and difference of these to no.s using single function?

#include<stdio.h>
void sd(int a,int b,int *sum,int *diff)
{
    *sum=a+b;
    *diff=a-b;
}
void main()
{
    int a,b,sum=0,diff=0;
    printf("Enter to numbers: ");
    scanf("%d%d",&a,&b);
    sd(a,b,&sum,&diff);
    printf("Sum of these no.s is: %d\nDifference of these no.s is: %d",sum,diff);
}