// WAP to input a string and check wheather its a palindrome or not??

#include<stdio.h>
#include<string.h>
void main()
{
    int l,k=0;
    char a[50];
    printf("Enter a string:\n");
    gets(a);
    l=strlen(a);
    for (int i = 0; a[i] !='\0'; i++)
    {
        if(a[i]!=a[l-1-i]) 
        {
            k=1;
            // break;
        }
    }
    if(k==0) printf("String is palindrome");
    else printf("String is not palindrome");
}