//Given a matrix having 0-1 only, find the row with the maximum number of 1's;

#include<stdio.h>
void main()
{
    int n,m,k=0,l=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element: ");
            scanf("%d",&a[i][j]);
        }        
    }
    printf("Given matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }        
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==1) count++;
        }
        if(count>k)
        {
            l=i+1;
            k=count;
        }
    }
    printf("Total number of 1's is max in %d row and that is %d",l,k);
    
    
}