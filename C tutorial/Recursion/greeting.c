#include<stdio.h>
void greeting(int x)
{
    if(x==0) return;
    printf("Good Morning\n");
    greeting(x-1);
    return;
}
int main()
{
    int n;
    printf("Enter the number of print: ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}