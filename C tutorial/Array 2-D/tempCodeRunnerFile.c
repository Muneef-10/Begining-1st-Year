//WAP that reads a sentence from the standard input device seperated by single space betn. the words. Design a UDF 'SubStr' that
//retrns a substring through its argument to the calling programm by taking the starting position and ending position
// as argumrnt to thr function. Display the sub-string in the calling program.

#include<stdio.h>
#include<string.h>
void substr(char a[],char b[],int s,int e)
{
    int j=0;
    for (int i = s-1;i<e; i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    
}
void main()
{
    char a[50],b[50];
    printf("Enter 1st string: ");
    gets(a);
    int s,e;
    printf("Enter starting position: ");
    scanf("%d",&s);
    printf("Enter Ending position: ");
    scanf("%d",&e);
    substr(a,b,s,e);
    puts(b);
}