// Create a structure to specify data on student with these attributes: Roll number, Name, Department,Course, Year of joining.Create 2 structure variables.
//Now, create a function to check of two student have the same Department. Pass the two structure variable as in input to this function

#include<stdio.h>
#include<string.h>
struct student
{
    char name[20],department[20],course[20];
    int rn,yj;
}a,b;
void check(struct student,struct student);
void main()
{
    printf("Enter the name of 1st student: ");
    gets(a.name);
    printf("Enter roll number of 1st student: ");
    scanf("%d",&a.rn);
    printf("Enter course of 1st student: ");
    fflush(stdin);
    gets(a.course);
    printf("Enter department of 1st student: ");
    fflush(stdin);
    gets(a.department);
    printf("Enter year of joining of 1st student: ");
    scanf("%d",&a.yj);

    printf("Enter the name of 2nd student: ");
    fflush(stdin);
    gets(b.name);
    printf("Enter roll number of 2nd student: ");
    scanf("%d",&b.rn);
    printf("Enter course of 2nd student: ");
    fflush(stdin);
    gets(b.course);
    printf("Enter department of 2nd student: ");
    fflush(stdin);
    gets(b.department);
    printf("Enter year of joining of 2nd student: ");
    scanf("%d",&b.yj);
    check(a,b);
}
void check(struct student x,struct student y)
{
    if(strcmp(x.department,y.department)==0) printf("Both have same department");
    else printf("Both have different department");
    return;
}