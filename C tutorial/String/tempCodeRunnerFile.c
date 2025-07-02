#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,c=0;
    gets(a);
    for (i = 0; a[i]!='\0'; i++)
    {
        if(a[i]==' ') 
        {
            c++;
            continue;
        }
        a[i-c]=a[i];

    }
    a[i-c]='\0';
    puts(a);
}