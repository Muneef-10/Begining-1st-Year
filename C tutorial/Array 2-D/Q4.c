#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the number of rows of 1st and 2nd matrix: ");
    scanf("%d",&n);
    printf("Enter the number of column of 1st and 2nd matrix: ");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&b[i][j]);
        } 
    }
    printf("1st matrix is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    }
    printf("2nd matrix is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",b[i][j]);
        } 
        printf("\n");
    }   
    printf("Sum of these matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            printf("%d ",a[i][j]);
        } 
        printf("\n");
    }
}