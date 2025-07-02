// Create a structure type 'Person' with name salary and age as its attributes. Declare and initialize 2 variables for this. print the name of first person and age of the other.

#include<stdio.h>
#include<string.h>
void main()
{
    struct person
    {
        char name[20];
        float salary;
        int age;
    }a,b;

    printf("Enter the name of first person: ");
    scanf("%s",a.name);
    printf("Enter the salary of first person: ");
    scanf("%f",&a.salary);
    printf("Enter the age of first person: ");
    scanf("%d",&a.age);
    printf("Enter the name of Second person: ");
    scanf("%s",b.name);
    printf("Enter the salary of second person: ");
    scanf("%f",&b.salary);
    printf("Enter the age of second person: ");
    scanf("%d",&b.age);
    puts(a.name);
    printf("%d",b.age);
}