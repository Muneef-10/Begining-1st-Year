//A record conatins name of cricketer,his age,number of test matches that he has played and the average run that he has scored in each test match.
//Create an array of structure to hold records of 20 such crickter and then write a program to read these records.

#include<stdio.h>
#include<string.h>
void main()
{
    typedef struct crickter
    {
        char fname[20];
        char lname[20];
        int age,ntm;
        float avgrun;
    }crickter;

    crickter a[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the first name of crickter: ");
        scanf("%s",a[i].fname);
        printf("Enter the last name of crickter: ");
        scanf("%s",a[i].lname);
        printf("Enter age: ");
        scanf("%d",&a[i].age);
        printf("Enter number of matches: ");
        scanf("%d",&a[i].ntm);
        printf("Enter avarage run: ");
        scanf("%f",&a[i].avgrun);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%s %s\n",a[i].fname,a[i].lname);
        printf("Age: %d\n",a[i].age);
        printf("No. of matches: %d\n",a[i].ntm);
        printf("Average Run: %f\n",a[i].avgrun);
    }
    
    
}