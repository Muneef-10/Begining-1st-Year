//WAP to input 'n' no.s in an array then print them using pointer?

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d",(p+i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
}