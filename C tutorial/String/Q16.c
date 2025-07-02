//WAP to call a UDF that return the reversed string to the calling program.In calling program check it's plaindrome or not and display appropriate message.
#include<stdio.h>
#include<string.h>
void star(char x[],int l)
{
    char t;
    for (int i = 0; i<l/2; i++)
    {
        t=x[l-1-i];
        x[l-1-i]=x[i];
        x[i]=t;
    }
    return ;
    
}
void main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    gets(a);
    strcpy(b,a);
    int l=strlen(a),k=1;
    star(a,l);
    if(strcmp(b,a)==0) printf("Palindrome");
    else printf("Not a palindrome");
}