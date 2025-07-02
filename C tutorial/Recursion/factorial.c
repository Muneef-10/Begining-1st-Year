#include<stdio.h>
int fact(int x)
{   
    if(x==0||x==1) return 1; //base case
    return x*fact(x-1);;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=fact(n);
    printf("The factorial of %d is : %d",n,a);
    return 0;
}