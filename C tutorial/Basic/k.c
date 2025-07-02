#include<stdio.h>
void main()
{
    int p,c,m,cs,e,per;
    printf("Enter the marks of physics:  ");
    scanf("%d",&p);
    printf("Enter the marks of chemistry:  ");
    scanf("%d",&c);
    printf("Enter the marks of maths:  ");
    scanf("%d",&m);
    printf("Enter the marks of computer science:  ");
    scanf("%d",&cs);
    printf("Enter the marks of english:  ");
    scanf("%d",&e);

    per=(p+c+m+cs+e)/5;
    printf("Percentage=%d\n",per);
    if(per>=90)
    {
        printf("Grade 'A'");
    }
    else if(per<90&&per>=80)
    {
        printf("Grade 'B'");
    }
    else if(per<80&&per>=70)
    {
        printf("Grade 'C'");
    }
    else if(per<70&&per>=60)
    {
        printf("Grade 'D'");
    }
    else if(per<60&&per>=40)
    {
        printf("Grade 'E'");
    }
    else
    {
        printf("Grade 'F'");
    }
}