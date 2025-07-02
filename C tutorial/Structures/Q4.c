/*WAP in 'C' to display name,roll number, DOB and DOA it is of a student read from the keyboard where the DOB and DOA further consist of 3 members such as day,
date and year in a seperate structre implement using a 'C' structue. */

#include<stdio.h>
void main()
{
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
        struct doa a;
        struct dob b;
    }c;
    printf("Enter the name of student: ");
    scanf("%[^\n]s",c.name);
    printf("Enter the roll number: ");
    scanf("%d",&c.rn);
    printf("Enter the date of birth: ");
    scanf("%d%d%d",&c.b.db,&c.b.mb,&c.b.yb);
    printf("Enter the date of admission: ");
    scanf("%d%d%d",&c.a.da,&c.a.ma,&c.a.ya);
    printf("Student name: %s\n",c.name);
    printf("Student Roll number: %d\n",c.rn);
    printf("Student date of birth: %d-%d-%d\n",c.b.db,c.b.mb,c.b.yb);
    printf("Student date of admission: %d-%d-%d",c.a.da,c.a.ma,c.a.ya);
}