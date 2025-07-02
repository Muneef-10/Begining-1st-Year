#include<stdio.h>
int sum(int x)
{
    if(x==1) return 1;   
    return x+sum(x-1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int add=sum(n);
    printf("The sum first %d natural number is: %d",n,add);
    return 0;
}