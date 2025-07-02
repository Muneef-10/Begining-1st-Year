/*print the given pattern take input numbers of line and stars in line
*****
*****
*****  */

#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the coloumn:  ");
    scanf("%d",&n);
    printf("Enter the rows:  ");
    scanf("%d",&m);    
    for (int i = 1; i <=m; i++) // outer loop --> no. of lines
    {    
    for (int i = 1; i <=n; i++) //inner loop --> no. of stars in each line
    {
        printf("* ");
    }
    printf("\n");
    }

}