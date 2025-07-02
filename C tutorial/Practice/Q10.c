//WAP to input n no. in an array then pass the array to an function calculate the sum of the elements in an array using function ?

#include<stdio.h>
int sum(int x[],int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s=s+x[i];
    }
    return s;
    
}
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int t=sum(a,n);
    printf("Sum of the array is: %d",t);
}