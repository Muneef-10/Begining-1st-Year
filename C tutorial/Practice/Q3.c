//WAP to compute the multiplication of the elements of matrix?

#include<stdio.h>
int main()
{
    int n,mul=1;
    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Elements of %d row %d coloumn: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul=mul*a[i][j];
        }
    }    
    printf("The sum of the given matrix is: %d ",mul);
}