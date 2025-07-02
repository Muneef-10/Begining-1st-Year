#include<stdio.h>
void num(int x)
{
    if(x==0) return;
    printf("%d\n",x);
    num(x-1);
    printf("%d\n",x);
    return ;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    num(n);
    return 0;
}