//Assume a character array STR[]={"CALENDAR YEAR2023"}. Develop a c program using a pointer to segregate the string and number into two different variables 
//without using any built-in function. Display the string and the number to the output.

#include<stdio.h>
#include<string.h>
void main()
{
    char STR[]={"CALENDAR YEAR2023"},a[20],b[20];
    char *p=STR;
    char *np= a;
    char *sp=b;
    // a[0]='\0';
    // b[0]='\0';
    while (*p!='\0')
    {
        if(*p>='A'&&*p<='Z' ||*p>='a'&&*p<='z')
        {
        *sp=*p;
        sp++;
        }
        else if(*p>='0'&&*p<='9')
        {
        *np=*p;
        np++;
        }
        p++;
    }
    *sp='\0';
    *np='\0';
        printf("%s\n",a);
        printf("%s",b);
    
}