#include<stdio.h>
void main()
{
    int n,search,flag=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter number to search: ");
    scanf("%d",&search);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==search)
        {
            printf("Yes");
            flag=1;
        }
    }
    if(flag==0)
    printf("No");
    
    
}