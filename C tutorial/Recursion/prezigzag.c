// print 111
//       211121112
//       321112111232111211123
//       432111211123211121112343211121112321112111234

#include<stdio.h>
void zigzag(int n)
{
    if(n==0) return ;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return ;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}