#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    printf("Enter 1st string: ");
    gets(a);
    int f=0,l=strlen(a);
    for (int i = 0; i < l/2; i++)
    {
        if(a[l-1-i]!=a[i])
        {
        f=1;
        break;
        }
    }
    if(f==0) printf("Palindrome");
    else printf("Not a Palindrome");
    
}