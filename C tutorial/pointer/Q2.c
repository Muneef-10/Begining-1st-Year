// WAP to input 'n' integer number in an array then pass this array to a fn. to reverse it using ptr.

#include<stdio.h>
void rev(int*,int);
void main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d value: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
void rev(int *p,int x)
{
    int t;
    for (int i = 0; i < x/2; i++)
    {
        t=*(p+x-1-i);
        *(p+x-1-i)= *(p+i);
        *(p+i)=t;
    }
    return ;
}
