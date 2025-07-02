// WAP to input a string and store it in reverse order without using and string??

#include<stdio.h>
#include<string.h>
void main()
{
    int l,i;
    char temp,a[50];
    printf("Enter a string\n");
    gets(a);
    puts("Normal string:");
    puts(a);
    l=strlen(a);
    for (i = 0; i < l/2; i++)
    {
        temp=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=temp;
    }
    
    // strrev(a);
    puts("Reverse string:");
    puts(a);
}