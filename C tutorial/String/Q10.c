// WAP to input two strings and check wheather they are equal or not ??  strcmp() pre defined for compare ....return 0 for equal return 1 for unequal.

#include<stdio.h>
#include<string.h>
void main()
{
    int k=0;
    char a[50],b[50];
    printf("Enter first string:\n");
    gets(a);
    printf("Enter second string:\n");
    gets(b);
    if (strlen(a)!=strlen(b))
    {
        printf("Strings are not Equal");
    }
    else
    {
    for (int i = 0; a[i] !='\0'; i++)
    {
        if(a[i]!=b[i])
        {
            k=1;
            break;
        }
    }
    }
    // k=strcmp(a,b);
    if(k==0)  printf("Strings are equal");
    else printf("Strings are not equal");
    
}