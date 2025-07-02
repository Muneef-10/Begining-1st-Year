//WAP to print a matrix?
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Elements of %d row %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }    

}