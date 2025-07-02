//Develop a C program to find total and average sales of 'N' employees by reading the details such as empcode, name, and sales using array of structures.

#include<stdio.h>
#include<string.h>
struct emp
{
    char name[20];
    int empcode;
    float sales;
};
void main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    float avg=0,t=0;
    struct emp a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of %d employee: ",i+1);
        fflush(stdin);
        gets(a[i].name);
        printf("Enter employee code: ");
        scanf("%d",&a[i].empcode);
        printf("Enter sales: ");
        scanf("%f",&a[i].sales);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        t=t+a[i].sales;
        avg=t/n;
    }
        printf("Total sales: %0.2f\n",t);
        printf("Average sales: %0.2f",avg);
    
}