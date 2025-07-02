// Create a structue 'Person' having attributes as age and weight. Access its structre variables using pointer. 

#include<stdio.h>
struct person 
{
    int age;
    float wt;
}a;
void main()
{
    printf("Enter age: ");
    scanf("%d",&a.age);
    printf("Enter weight: ");
    scanf("%f",&a.wt);

    struct person *x=&a;

    printf("Age = %d\n",(x->age));
    printf("Weight = %0.2f",(x->wt));
}