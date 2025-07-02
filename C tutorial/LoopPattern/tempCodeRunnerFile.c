// print 3 3 3
//       2 2 2
//       1 1 1 

#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a);
            
        }
        a--;
        printf("\n");
    }
    
}