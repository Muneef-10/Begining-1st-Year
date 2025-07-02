/*Enter the marks of 5 students in chemistry, maths and physics each out of 100 using a structure name 'marks' having elements 
roll no., name,chem_marks,maths_marks,phy_marks display the % of each student and find the highest % of them ?? */

#include<stdio.h>
void main()
{
    struct marks
    {
        char name[20];
        int rn;
        float chem_marks, phy_marks, maths_marks;
    }a[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter the name of %d student: ",i+1);
        scanf("%[^\n]s",a[i].name);
        printf("Enter the Roll number of %d student: ",i+1);
        scanf("%d",&a[i].rn);
        printf("Enter marks in chemistry of %d student: ",i+1);
        scanf("%f",&a[i].chem_marks);
        printf("Enter marks in physics of %d student: ",i+1);
        scanf("%f",&a[i].phy_marks);
        printf("Enter marks in maths of %d student: ",i+1);
        scanf("%f",&a[i].maths_marks);
        printf("\n");
        getchar();
    }
    float t[5]={0};
    for (int i = 0; i < 5; i++)
    {
        t[i]=(a[i].chem_marks+a[i].maths_marks+a[i].phy_marks)/3;
        printf("Percetage of %d student: %0.2f\n",i+1,t[i]);
    }
    float max=0;
    for (int i = 0; i < 5; i++)
    {
        if(max<t[i]) max=t[i];
    }
    printf("\nHighest percentage is: %0.2f",max);
}