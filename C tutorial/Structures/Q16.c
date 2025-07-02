//Develop a C program to display Name, Roll Number, Date of Birth and Date of Admission details of a student read from the keyboard where the date of birth and
//date of admission further consists of three members such as day, month and year in a separate structure. Implement using a C structure.

#include<stdio.h>
struct dob
{
    int db,mb,yb;
};
struct doa
{
    int da,ma,ya;
};
struct student 
{
    char name[20];
    int rn;
    struct dob d;
    struct doa a;
}s;
void main()
{
    printf("Enter name of student: ");
    gets(s.name);
    printf("Enter roll no.: ");
    scanf("%d",&s.rn);
    printf("Enter date of birth: ");
    scanf("%d%d%d",&s.d.db,&s.d.mb,&s.d.yb);
    printf("Enter date of admission: ");
    scanf("%d%d%d",&s.a.da,&s.a.ma,&s.a.ya);

    puts(s.name);
    printf("%d\n",s.rn);
    printf("%d-%d-%d\n",s.d.db,s.d.mb,s.d.yb);
    printf("%d-%d-%d\n",s.a.da,s.a.ma,s.a.ya);
}