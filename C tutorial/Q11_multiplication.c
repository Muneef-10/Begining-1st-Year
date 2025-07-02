//WAP to multiply two matrix??

#include<stdio.h>
void main()
{
    int n1,m1,n2,m2;
    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d",&n1);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d",&m1);
    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d",&n2);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d",&m2);
    int a[n1][m1],b[n2][m2],c[n1][m2];
    if(m1!=n2) printf("\nMultiplication is not possible, because number of columns of 1st matrix is not equal to number of rows of 2nd matrix");
    else
    {
        printf("Enter 1st matrix Elements: \n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd matrix Elements: \n");
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                c[i][j]=0;
                for (int k = 0; k < m1; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                
            }
            
        }
        printf("First matrix is: \n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\nSecond matrix is: \n");
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        printf("\nMultiplication of these matrix is: \n");
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        
    }
}