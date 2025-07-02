//WAP to check a matrix is upper triangular or not if yes then print yes?

#include<stdio.h>
void main()
{
    int n,m,k=0;
    printf("Enter the number of rows of a matrix: ");
    scanf("%d",&n);
    printf("Enter the number of column of a matrix: ");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the element of %d row and %d column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            {
                if(a[i][j]==0)
                {
                    k=1;
                }
            }
        }
    }
    if(k==1) printf("Yes, Its a upper triangular matrix");
    else printf("No, Its not a upper triangular matrix\n");
}