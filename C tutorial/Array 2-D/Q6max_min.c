//WAP to find the max and min number in the matrix with their index??

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d",&n);
    printf("Enter the number of column of the matrix: ");
    scanf("%d",&m);
    int r[n][m];
    
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&r[i][j]);
        }        
    }
    int a=0,b=0,c=0,d=0, max=r[a][b],min=r[c][d];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(max<r[i][j]) 
           {
                a=i;
                b=j;
                max=r[i][j];
           }
            if(min>r[i][j]) 
            {
                c=i;
                d=j;
                min=r[i][j];
            }
        }
    }
    printf("Maximum: %d  and minimum is: %d\n",max,min);
    printf("Index of the maximun number is(%d,%d) and the index of minimun number is(%d,%d)",a,b,c,d);        
}