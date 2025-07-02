//WAP to calculate number of words in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    
    int f=1;
    char a[20];
    printf("Enter a string: ");
    gets(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]==' ' && a[i+1]!=' ') f++;
    }
    printf("Number of words in the string are: %d",f);
    
}