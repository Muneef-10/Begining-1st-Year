// WAP to input a string & toggle(Upper converted to lower , lower converted to upper) it ??

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    printf("Enter the string\n");
    gets(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i] = a[i]-32;
        }
    }
    printf("String after toggle\n");
    puts(a);
    
}
