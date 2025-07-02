//Create a structue 'date' that contains three members namely date, month and year.create 2 structure variables with different dates and now compare the two.
//If the dates are equal then display message as "Equal" otherwise "Unequal".

#include<stdio.h>
#include<stdbool.h>
struct date
{
    int date,month,year;
}a,b;
void main()
{
    printf("Enter 1St date: ");
    scanf("%d%d%d",&a.date,&a.month,&a.year);
    printf("Enter 2nd date: ");
    scanf("%d%d%d",&b.date,&b.month,&b.year);
    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
    if(flag == true) printf("Dates are Equal");
    else printf("Dates are Unequal");


    //if(a.date==b.date && a.month==b.month && a.year==b.year) printf("Dates are Equal");
    //else printf("Dates are Unequal");

}