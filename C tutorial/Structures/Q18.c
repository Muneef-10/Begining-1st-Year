//Develop a C program to read the attributes of an item from the user such as ItemCode, ItemName, Quantity and Rate. Implement a C program using a structure 
//to find the total cost of the inventory of storing N items in the stock.

#include<stdio.h>
struct mart
{
    char name[20];
    int itemcode,quantity;
    float rate;
};
void main()
{
    int n;
    printf("Enter the number of Items: ");
    scanf("%d",&n);
    float t=0;
    struct mart a[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter Item name: ");
            fflush(stdin);
            gets(a[i].name);
            printf("Enter Item code: ");
            scanf("%d",&a[i].itemcode);
            printf("Enter Quantity: ");
            scanf("%d",&a[i].quantity);
            printf("Enter rate: ");
            scanf("%f",&a[i].rate);
        }
        for (int i = 0; i < n; i++)
        {
            t=t+(a[i].quantity*a[i].rate);
        }
    printf("Total cost: %0.2f",t);
}