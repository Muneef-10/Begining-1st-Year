//    A
//   AB
//  ABC
// ABCD

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=65;
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
            char ch=(char)a;
            printf("%c",a);
            a++;
        }
        
        
        printf("\n");
    }
    
}