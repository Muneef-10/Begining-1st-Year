//Draw a flowchart and design a C program to accept a string from the user than call a function 'Replace' that replaces all the vowels present in the passed 
//string with capital 'X' and then print the modified string in the calling program. Implement using a pointer.

#include<stdio.h>
#include<string.h>
void replace(char *,int );
void main()
{
    char a[20];
    printf("Enter a string: ");
    gets(a);
    int l=strlen(a);
    replace(a,l);
    puts(a);
}

void replace(char *a,int x)
{
    for (int i = 0; i < x; i++)
    {
        if(*(a+i)=='a'|| *(a+i)=='e'||*(a+i)=='i'||*(a+i)=='o'||*(a+i)=='u') *(a+i)='X';
    }
    return ;
}