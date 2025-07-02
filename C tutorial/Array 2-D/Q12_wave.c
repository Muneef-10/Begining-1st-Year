//WAP to print a matrix in a wave form??

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter matrix Element:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nNormal matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //wave print
    printf("\nWave matrix:\n");
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
        for (int j = 0; j <m; j++)
        {
            printf("%d ",a[i][j]);
        }
        }
        else 
        {
        for (int j = m-1; j >=0; j--)
        {
            printf("%d ",a[i][j]);
        }
        }
        printf("\n");
    }
    
}