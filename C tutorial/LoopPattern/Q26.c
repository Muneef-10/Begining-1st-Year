// print 3 3 3
//       2 2 2
//       1 1 1 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int a=n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("%d ",a);
        }
        a--;
        printf("\n");       
    }
}