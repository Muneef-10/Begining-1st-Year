/*  ******
    *    *
    *    *
    ******   */

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows:  ");
    scanf("%d", &n);
    printf("Enter the number of coloums:  ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
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

    return 0;
}