#include<stdio.h>
int num(int x)
{
    if(x==0) return ;
    num(x-1);
    printf("%d\n",x);
    return ;
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    num(n);
}