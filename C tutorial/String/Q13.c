//WAP that reads a sentence from the standard input device seperated by single space betn. the words. Design a UDF 'SubStr' that retrns a substring through its argument to the calling programm by taking the starting 
//position and ending position as argumrnt to thr function. Display the sub-string in the calling program.

#include<stdio.h>
#include<string.h>
void SubStr(char b[],char d[],int s,int e)
{
    int j=0;

    for (int i = s-1; i< e; i++)
    {
        d[j]=b[i];
        j++;
    }
    d[j]='\0'; 
    return;   
    
}
void main()
{
    char a[20],c[20];
    int s,e;
    printf("Enter a string: ");
    gets(a);
    printf("Enter starting position: ");
    scanf("%d",&s);
    printf("Enter starting position: ");
    scanf("%d",&e);
    SubStr(a,c,s,e);
    puts(c);
}