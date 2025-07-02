#include <stdio.h>
int power(int b, int p)
{
    if(p==0)return 1;
    int k=power(b,p/2);
    if (p%2==0)
    {
        return k*k;
    }
    else
    {
        return k*k*b;
    }
}
int main()
{
    int b,p;
    printf("Enter base and power\n");
    scanf("%d%d",&b,&p);
    int t=power(b,p);
    printf("%d",t);
    return 0;
}