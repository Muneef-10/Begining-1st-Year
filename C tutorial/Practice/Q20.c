// WAP to input 'n' integer number in an array then pass their array to a function receive it as a pointer then find largest among them? 

#include<stdio.h>
int max(int *pa,int n)
{
    int max=*pa;
    for (int i = 0; i < n; i++)
    {
        if(max<*(pa+i))
        max=*(pa+i);
    }
    return max;    
}
void main()
{
    int m,*p;
    printf("Enter the limit: ");
    scanf("%d",&m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    printf("Largest number among these numbers is: %d",max(a,m));
}