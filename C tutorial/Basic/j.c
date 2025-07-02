#include<stdio.h>
void main()
{
    int a;
    float s,r,area;
    printf("Press 1 for area of Circle\n");
    printf("Press 2 for area of Rectangle\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Enter the radius of circle:  ");
        scanf("%f",&r);
        area = 3.14*r*r;
        printf("Area of circle=%f",area);
        break;
        case 2:
        printf("Enter the value of sides:  ");
        scanf("%f%f",&s,&r);
        area= s*r;
        printf("Area of rectangle=%f",area);
        break;
        default:
        printf("Invalid number");
        break;
    }
}