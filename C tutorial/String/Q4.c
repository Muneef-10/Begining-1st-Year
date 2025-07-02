//WAP to input string & check how many vowels are their in that string.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],c=0;
    printf("Enter the string\n");
    gets(a);
    puts(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            c++;
        }
    }
    printf("Total number of vowels in this string are : %d",c);
    
}