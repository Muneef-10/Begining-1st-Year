//Develop a program in C to read a structure in the main program of an Employee that contains Name, EmpCode and Salary as the members. Write a function 
//display the details of the employee in the following format.

#include<stdio.h>
struct employee 
{
    char name[20],m[20];
    char empcode[20];
    float salary;
}a;
void emp(struct employee v)
{
    printf("\t ABCCorporation\n");
    printf("Name\t\t:%s\n",v.name);
    printf("EmpCode\t\t:%s\n",v.empcode);
    printf("DOB\t\t:%s\n",v.m);
    printf("Nett. Salary\t:Rs.%0.2f\n",v.salary);
}
void main()
{
    printf("Enter name of Employee: ");
    gets(a.name);
    printf("Enter employee code: ");
    fflush(stdin);
    gets(a.empcode);
    printf("Enter date of birth: ");
    fflush(stdin);
    gets(a.m);
    printf("Enter salary: ");
    scanf("%f",&a.salary);

    emp(a);
}