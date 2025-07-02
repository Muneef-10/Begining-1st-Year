//      1     0c0
//     1 1    1c0 1c1
//    1 2 1   2c0 2c1 2c2
//   1 3 3 1  3c0 3c1 3c2 3c3 

#include<stdio.h>
int fact(int x)
{
    int f=1;
    for (int i = 1; i <=x; i++)
    {
        f=f*i;
    }
    return f;
}
int comb(int n,int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter the number  of rows: ");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int l = 0; l <n-i; l++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <=i; j++)
        {
            int icj = comb(i,j);
            printf("%d ",icj);
        }
        
        printf("\n");
    }
    return 0;
}
