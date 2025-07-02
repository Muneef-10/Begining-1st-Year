#include<stdio.h>
int fib(int x)
{
    if(x==1) return 0;
    if(x==2) return 1;
    return fib(x-1)+fib(x-2);
}
void main()
{
    int n;
    printf("Enter the position of an number: ");
    scanf("%d",&n);
    int t=fib(n);
    printf("%d",t);
}