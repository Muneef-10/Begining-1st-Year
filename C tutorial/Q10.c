//WAP to rotate a sq. matrix 90 degree clockwise??

#include<stdio.h>
void main()
{
    int n,m,t,p,temp=0;
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
    printf("Normal matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }  
    printf("\n"); 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][m-1-j];
            a[i][m-1-j]=temp;
        }
    }
    
    printf("Matrix after rotating 90 degree: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
         
}