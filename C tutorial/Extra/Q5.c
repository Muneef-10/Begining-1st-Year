/*Given a boolean matrix (contains only 0 and 1) of size m X n where each row is
sorted, write analgorithm and a program to find which row has maximum number of 1's.*/

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter row and column of matrix: ");
    scanf("%d%d",&n,&m);
    int b[n][m];
    printf("Enter elements of matrix:\n");
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int i=0,j=m-1,a=0;
    while (i<n && j>=0)
    {
        if(b[i][j]==1)
        {
            ans=i;
            j--;
        }
        else i++;
    }
    printf("Row that has maximum number of 1's: %d",ans+1);    
}