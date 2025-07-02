//WAP to input two strings then merge them into first string?? 

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int l,i;
    printf("Enter first string:\n");
    gets(a);
    l=strlen(a);
    printf("Enter second string:\n");
    gets(b);
    for (int i = 0;a[i]!='\0'; i++)
    {
        a[l+i]=b[i];
    }
    //strcat(a,b);
    puts(a);    
}