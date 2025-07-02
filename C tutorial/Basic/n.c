/*Q5. Write a C program to read the value of x from the user and calculate the final value of the function.
F(x) for the following equations as shown:
 F(x) = x2+2 if 0<=x<=10 
 F(x) = x2+2x if 11<=x<=20 
 F(x) = x3+2x2 if 21<=x<=30 
 F(x) = 0 if x>30*/

#include<stdio.h>
#include<math.h>
void main()
{
    float x,fx;
    printf("Enter the value of x:  ");
    scanf("%f",&x);
    if(x>=0&&x<=10)
    {
        fx=pow(x,2)+2;
    }
    else if(x>=11&x<=20)
    {
        fx=pow(x,2)+2*x;
    }
    else if (x>=21&x<=30)
    {
        fx=pow(x,3)+2*pow(x,2);
    }
    else
    {
        fx=0;
    }
    printf("f(x)=%f",fx);
}