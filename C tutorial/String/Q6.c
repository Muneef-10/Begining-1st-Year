// WAP to input a string and calculate the length of the string??

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],l=0;
    printf("Enter a string:\n");
    gets(a);
    // for (int i = 0; a[i] !='\0'; i++)
    // {
    //     l++;
    // }
    int p=strlen(a);
    printf("String length is %d",p);
}