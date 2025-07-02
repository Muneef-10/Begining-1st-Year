#include<stdio.h>
void num(int x)
{
    if(x==0) return ;  //base case
    printf("%d\n",x); // code
    num(x-1);  //recursive call 
    return ;   //return
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    num(n);
    return 0;
}