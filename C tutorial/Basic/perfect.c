#include<stdio.h>
void pn(int x, int y)
{
    int sum;
    for (int i = x; i < y; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
        printf("%d is perfect number\n",i);
        
    }
    
}
void main()
{
    int n,m;
    printf("Enter limit: ");
    scanf("%d%d",&n,&m);
    pn(n,m);
}