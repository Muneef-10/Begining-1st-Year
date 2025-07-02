#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element of an array: ",i+1);
        scanf("%d",&a[i]);
    }
    int max=0,smax=0;
    for (int i = 0; i < n; i++)
    {
        if(max<a[i]) 
        {
            max=a[i];
        }
        if( a[i]!=max && smax<a[i]) 
        {
            smax=a[i];
        }
    }
    printf("Second largest number is: %d",smax);    
    return 0;
}