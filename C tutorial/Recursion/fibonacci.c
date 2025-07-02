#include<stdio.h>
int fib(int x)
{
    if(x==1) return 0;
    if(x==2) return 1;
    int t=fib(x-1)+fib(x-2);
    return t; 
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int f=fib(n);
    printf("The %dth term of the fibonacci series is: %d",n,f);
    return 0;
}
