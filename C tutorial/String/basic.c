// ASCII of elements:
// 'A'= 65
// 'a'= 97
// '0'= 48
// '1'= 57
// '\0'=  0
// char ch='A'
// int x= (int)ch;    means ASCII value of x is stored in x
// int t=65;
// char p=(char)t;    character at value t stored in p


#include<stdio.h>
#include<string.h>
void main()
{
    char b[20], a[]= "College wallah";
    
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     printf("%c",a[i]);
    //     i++;
    // }
    // int l=strlen(a);
    // printf("\n%d",l);

    //printf("%s",a);

    // puts(a);  only for string print
    // puts("Hello Everyone");
    // gets(b);
    scanf("%[^\n]s",b);        //Alternate way to use SCANF function
    printf("Your input: %s",b);
}