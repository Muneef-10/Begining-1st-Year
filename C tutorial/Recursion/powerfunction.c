#include<stdio.h>
int powerlog(int a,int b)
{
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0) //even
    {
        return x*x;
    }
    else
    {
        return x*x*a;
    }
    
}
int main()
{
    int a,b;
    printf("Enter the Base: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    // if(b==0) printf("%d raised to the power %d is: 1",a,b);
    int t =powerlog(a,b);
    printf("%d raised to the power %d is: %d",a,b,t);
}