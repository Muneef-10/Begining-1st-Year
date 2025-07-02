//    A
//   ABC
//  ABCDE
// ABCDEFG

#include<stdio.h>
void main()
{
    int n,b=1;
    printf("Enter the number of rows:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int c=65;
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        char ch=(char)c;
        for (int k = 1; k <=b; k++)
        {
            printf("%c",c);
            c++;
        }
        b=b+2;
        
        printf("\n");
    }
    
}