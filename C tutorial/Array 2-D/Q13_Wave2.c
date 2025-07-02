/*print in wave 2 for 
1 2 3          7 4 1
4 5 6   ==>    2 5 8
7 8 9          9 6 3*/

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }        
    }
    printf("Normal marix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
    
}