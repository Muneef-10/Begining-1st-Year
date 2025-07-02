// WAP to compute the sum of elements of each row of a matrix?

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the number of rows of matrix: ");
    scanf("%d",&n);
    printf("Enter the number of column of matrix: ");
    scanf("%d",&m);
    int a[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the Elements of %d row and %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Elements in matrix are\n");
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
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            sum=sum+a[i][j];
        }
        printf("The sum of the %d row is: %d",i+1,sum);
        printf("\n");
    }
}