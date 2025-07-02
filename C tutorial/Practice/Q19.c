// WAP to input 'n' integer no.s in an array then calculate sum of elements of that array?

#include<stdio.h>
void main()
{
    int n,*p,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a[n];
    p=a;
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements: ");
        scanf("%d",(p+i));
        sum=sum+*(p+i);
    }
    printf("Sum of these numbers is: %d",sum);
    
}