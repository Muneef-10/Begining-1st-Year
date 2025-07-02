// WAP to input 'n' integer number in an array then pass this array to a fn. receive it a pointer the find the largest among then.

#include<stdio.h>
int lar(int *p,int x);
void main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:-\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest number is:- %d",lar(a,n));
}
int lar(int *p,int x)
{
    int i,l=*p;
    for ( i = 0; i < x; i++)
    {
        if(l<*(p+i)) l=*(p+i);
    }
    return l;    
}
