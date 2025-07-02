// WAP to input 'n' integers no.s in an array then by using function store it in reverse order? 

#include<stdio.h>
void rev(int x[],int n);
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    rev(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
void rev(int x[],int n)
{
    int tmp;
    for (int i = 0; i < n/2; i++)
    {
        tmp=x[n-i-1];
        x[n-i-1]=x[i];
        x[i]=tmp;
    } 
}
