#include<stdio.h>
#include<math.h>
void main()
{
    int n,c=0,sum=0,d;
    printf("Enter Number: ");
    scanf("%d",&n);
    d=n;
    while(d!=0)
    {
        d=d/10;
        c++;
    }
    d=n;
    while (d!=0)
    {
        sum=sum+pow(d%10,c);
        d=d/10;
    }
    if(sum==n) printf("Number is Armstrong");
    else printf("Number is not armstrong");
    
}