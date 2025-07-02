/* Given a matrix of size n X n containing positive integers, write an algorithm and a
program torotate the elements of matrix in clockwise direction.*/

#include<stdio.h>
void main()
{
   int n;
   printf("Enter size of a square matrix:\n");
   scanf("%d",&n);
   int m[n][n];
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
   }

   int t=0,b=n-1,l=0,r=n-1;
   
    while(t<b && l<r)
    {
        int prev = m[t][l];
        for(int i=l+1;i<=r;i++)
        {
          int temp = m[t][i];
          m[t][i] = prev;
          prev = temp;
        }
        t++;
        for(int i=t;i<=b;i++)
        {
          int temp = m[i][r];
          m[i][r] = prev;
          prev = temp;
        }
        r--;
        for(int i=r;i>=l;i--)
        {
          int temp = m[b][i];
          m[b][i] = prev;
          prev = temp;
        }
        b--;
        for(int i=b;i>=t-1;i--)
        {
          int temp = m[i][l];
          m[i][l] = prev;
          prev = temp;
        }
        l++;
    }
    printf("After rotation:\n");
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
          printf("%d ",m[i][j]);
       }
       printf("\n");
    } 
}