// Given a matrix 'a' of dimension n x m and 2 cordinates (l1,r1)and (l2,r2).Return the sum of the rectangle from (l1,r1)to (l2,r2).

#include<stdio.h>
void main()
{
    int n,m,l1,l2,r1,r2,sum=0;
    printf("Enther the number of rows: ");
    scanf("%d",&n);
    printf("Enther the number of columns: ");
    scanf("%d",&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the Element: ");
            scanf("%d",&a[i][j]);
        }        
    }
    printf("Enter the index of 1st element\n");
    scanf("%d%d",&l1,&r1);
    printf("Enter the index of last element\n");
    scanf("%d%d",&l2,&r2);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = l1; i <=l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum=sum+a[i][j];
        }
                
    }
    printf("Sum of the selected Rectangle is:%d\n",sum);
       
}