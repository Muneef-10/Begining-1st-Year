//sample paper 2023 april Q2(a) UDF return 1 if palindrome otherwise 0;

#include<stdio.h>
#include<string.h>
int pal(char a[],int n)
{
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]!=a[n-1-i])
        return 0;
        else return 1;
    }    
}
void main()
{
    char a[50];
    int l;
    printf("Enter the string:\n");
    gets(a);
    l=strlen(a);
    int t= pal(a,l);
    if(t==1) puts("Given string is Palindrome");
    else puts("Given string is not palindrome");
}