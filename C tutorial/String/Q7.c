// WAP to input a string then copy that string into another string??

#include<stdio.h>
#include<string.h> 
void main()
{
    int i;
    char a[50],b[50];
    printf("Enter the string:\n");
    gets(a);
    // for (i = 0; a[i] !='\0'; i++)
    // {
    //     b[i]=a[i];
    // }
    // b[i]='\0';
    strcpy(b,a);
    puts(a);
    puts(b);
}