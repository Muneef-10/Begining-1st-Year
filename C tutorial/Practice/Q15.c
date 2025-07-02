//sample paper 2023 april Q1(b)

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50]={0},c[50]={0};
    printf("Enter a string:\n");
    gets(a);
    int j=0,k=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
                b[j]=a[i];
                j++;
            }
            else
            {
                c[k]=a[i];
                k++;
            }
        }   
        
    }
    printf("Vowels: %s",b);
    printf("\nConstants: %s",c);
}