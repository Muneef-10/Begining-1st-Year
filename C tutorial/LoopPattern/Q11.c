/*    *
      * 
  * * * * *
      * 
      *   input n=5 here*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the odd number of rows:  ");
    scanf("%d",&n);
    if(n%2!=0)
    {
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(j==(n+1)/2 || i==(n+1)/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    }
    else
    {
        printf("Invalid input print a odd number");
    }
    return 0;
}