#include<stdio.h>
struct store
{
    char name[20];
    int code,rate,quantity;
};
void main()
{
    int n;
    printf("Enter the number of products: ");
    scanf("%d",&n);
    int t[n];
    struct store s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter item name: ");
        scanf("%s",s[i].name);
        printf("Enter item code: ");
        scanf("%d",&s[i].code);
        printf("Enter item rate: ");
        scanf("%d",&s[i].rate);
        printf("Enter item quantity: ");
        scanf("%d",&s[i].quantity);
    }
    for (int i = 0; i < n; i++)
    {
        t[i]=(s[i].rate*s[i].quantity);
    }
    for (int i = 0; i < n-1; i++)
    {
        t[i+1]=t[i]+t[i+1];
    }
    printf("Total price: %d",t[n-1]);
}