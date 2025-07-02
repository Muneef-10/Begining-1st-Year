//WAP to print the row number having the maximum sum in a given matrix.

#include<stdio.h>
void main()
{
    int n,m,l,k=0,sum=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of column: ");
    scanf("%d",&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the elements: ");
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
        sum=0;
        for (int j = 0; j < m; j++)
        {
            sum=sum+a[i][j];
        }
        if(k<sum) 
        {
            l=i+1;
            k=sum; 
        }
               
    }
    printf("%d row has maximum sum %d",l,k);
}