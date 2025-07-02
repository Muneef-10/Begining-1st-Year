//WAP ex:- INPUT :- PROGRAMMING  OUTOPUT:- PROGRXMMING, replace middple one by 'X' in even length ignore the case.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    puts("Enter a string:-");
    gets(a);
    int l=strlen(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(l%2!=0)
        {
            if (i==(l+1)/2)
            {
                a[i-1]='X';
            }
            
        }
    }
    puts(a);
    
}