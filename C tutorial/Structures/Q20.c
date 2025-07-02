//WAP to input information for 'n' no. of students and then print the % of all students.

#include<stdio.h>

struct student
{
    char name[20];
    int m[5];
};
void main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int p[n];
    struct student a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ",i+1);
        fflush(stdin);
        scanf("%[^\n]s",a[i].name);
        p[i]=0;
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks in subject %d: ",j+1);
            scanf("%d",&a[i].m[j]);
            p[i]=p[i]+a[i].m[j];
        }        
        
    }
    for (int i = 0; i < n; i++)
    {
        p[i]=p[i]/5;
        printf("\nPercentage of student %d: ",p[i]);
    }
    
}