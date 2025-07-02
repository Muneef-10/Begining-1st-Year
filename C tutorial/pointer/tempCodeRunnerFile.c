//Draw a flowchart and design a C program to accept a string from the user than call a function 'Replace' that replaces all the vowels
//present in the passed string with capital 'X' and then print the modified string in the calling program. Implement using a pointer.

#include<stdio.h>
#include<string.h>
void replace(char *p,int l)
{
    for (int i = 0; i < l; i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')  *(p+i)='X';
    }
    
}
void main()
{
    char a[20];
    printf("Enter a string:\n");
    gets(a);
    int l=strlen(a);
    replace(a,l);
    puts(a);
}