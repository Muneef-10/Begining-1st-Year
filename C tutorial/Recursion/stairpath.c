#include<stdio.h>
int stair(int x)
{
    if(x==1||x==2||x==3) return x;
    //if(n==1) return 1;
    //if(n==2) return 2;
    int totalways = stair(x-1)+stair(x-2)+stair(x-3);
    return totalways;
}
int main()
{
    int n;
    printf("Enter the  number of stairs: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}