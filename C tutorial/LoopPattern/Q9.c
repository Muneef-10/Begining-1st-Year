/*A
  AB
  ABC  */

#include<stdio.h>
int main()
{
    int n;
    printf("Ente the number of rows:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=65;
        for (int j = 1; j <=i; j++)
        {
            char ch=(char)a;
            printf("%c ",a);
            a++;
        }
        
        printf("\n");
    }
    
    return 0;
}