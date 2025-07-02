// 1
// 21
// 321
// 4321

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=i;
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            a--;
        }
        
        printf("\n");
    }
    
}