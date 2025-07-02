//WAP to print lower triangular matrix?

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of %d row and %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of a matrix are: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Lower matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>i)
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    
    
}