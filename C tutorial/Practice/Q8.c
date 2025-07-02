//WAP to input a square matrix store and print its tranpose ?

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of a matrix of %d row and %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }        
    }
    printf("Normal matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        { 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of a Matrix is: \n");
    
    for (int i = 0; i < n; i++)//(int i=1;i<n;i++)
    {
        
        for (int j = 0; j < n; j++)//(int j=0;j<n-1;j++)
        {
            if(i>j)
            {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        { 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}