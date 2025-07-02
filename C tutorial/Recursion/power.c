#include<stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;   
    return a*power(a,b-1);
}
int main()
{
    int n,m;
    printf("Enter the Base: ");
    scanf("%d",&n);
    printf("Enter the Power: ");
    scanf("%d",&m);
    int p=power(n,m);
    printf("%d raised to the power %d is: %d",n,m,p);
    return 0;
} 