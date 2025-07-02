//WAP to input 'n' integer number in an array the pass this array to a function to reverse it using pointer? 

#include<stdio.h>
void rev(int *p,int n)
{
    int tmp=0;
    for (int i = 0; i < n/2; i++)
    {
        tmp=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=tmp;
    }
    
}
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    rev(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}