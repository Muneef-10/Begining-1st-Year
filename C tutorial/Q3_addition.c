//WAP to add two matrix and print the sum of two matrix? 

#include<stdio.h>
void main()
{
    int n,m,n1,m1;
    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d",&n);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d",&m);
    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d",&n1);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d",&m1);
    int a[n][m],b[n1][m1],c[n][m];
    if(n!=n1||m!=m1) printf("Addition of these matrix is not possible, number of rows and column of both the matrix are not same");
    else
    {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the elements of 1st matrix of %d row and %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n1;i++)
    {
        for (int  j = 0; j < m1; j++)
        {
            printf("Enter the elements of 2nd matrix of %d column and %d column: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }   
    }
    printf("1st matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of these matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
        }   
        printf("\n");
    }
    }    
}