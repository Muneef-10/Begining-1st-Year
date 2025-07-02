#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    if(n>=0&&n<=9)
    {
        printf("number is single digit");
    }
    else if(n>=10&&n<=99)
    {
        printf("number is Double digit");
    }
    else
    {
        printf("Invalid number");
    }

}