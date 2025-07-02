//     1
//    121
//   12321
//  1234321

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {  
        int a=i-1;      
        for (int p =1;p <=n-i; p++)
        {
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        for (int k = 1; k <=i-1; k++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    
}