#include<stdio.h>
int main()
{
    //a[3]={0}    correct way.
    int a[2][2]={{1,3},{2,4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}