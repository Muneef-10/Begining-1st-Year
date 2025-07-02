//WAP to input a string & check how many vowels are their in that string ?

#include<stdio.h>
#include<string.h>
void main()
{
    int l,v=0;
    char a[50];
    printf("Enter the string: ");
    gets(a);
    l=strlen(a);
    for (int i = 0; i < l; i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        v++;
    }
    puts(a);
    printf("Total number of vowels in above string is: %d",v);
    
}