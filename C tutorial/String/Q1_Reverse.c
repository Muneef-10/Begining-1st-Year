//Reverse a string?? int l= strlen(a);

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],temp;
    printf("Enter a string: ");
    gets(a);
    int size=0,k=0;
    while (a[k]!='\0')
    {
        size++;
        k++;
    }
    for (int i = 0; i < size/2; i++)
    {
        temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
    }
    puts(a);
    
}