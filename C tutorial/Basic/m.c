//Q4. Write a C program to read three test scores of a student and find the average of best two scores. Assume a test of MM 25 marks each.
#include<stdio.h>
void main()
{
    float a,b,c,avg;
    printf("MM is 25\n");
    printf("Enter the marks in all three subjects\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>c&&b>c)
    {
        avg=(a+b)/2;
    }
    else if(a>b&&c>b)
    {
        avg=(a+c)/2;
    }
    else
    {
        avg=(b+c)/2;
    }
    printf("Average=%f",avg);
}

