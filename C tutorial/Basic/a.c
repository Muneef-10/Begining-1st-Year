#include<stdio.h>
void main()
{
    int n,num,flag=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            for (int j = i; j < n; j++)
            {
                a[j]=a[j+1];
            }
            flag=1;            
        }        
    }
    if(flag==0)
    {
        printf("Number not exist");
    }
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            printf("%d ",a[i]);
        }
    }
}