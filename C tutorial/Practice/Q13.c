//WAP to input 'n' integer no. of 2D array of matrix then calculate sum of a row whose index will be input by user?

#include<stdio.h>
void main()
{
    int n,m,r,s=0;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    printf("Enter the number of row: ");
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
    printf("Enter the row number for sum: ");
    scanf("%d",&r);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==r-1)  s=s+a[i][j];
        }        
    }
        printf("Sum of row %d is: %d",r,s);
}