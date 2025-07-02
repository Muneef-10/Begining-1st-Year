/*
1
2 3
4 5 6
7 8 9 1
2 3 4 5 6
*/

#include<stdio.h>
void main()
{
    int n,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            a++;
            if (a>=10)
            {
                a=1;
            }
            
        }
        
        printf("\n");
    }
       
}