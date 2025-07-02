//WAP to store roll number and marks obatined by 4 students side by side in a matrix?

#include<stdio.h>
void main()
{
    int a[4][2];
    printf("Enter First roll no. then marks of 4 students\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");        
    }
    
    
}