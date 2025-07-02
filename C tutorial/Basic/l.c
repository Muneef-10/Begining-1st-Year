#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("its a alphabet");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("its a digit");
    }
    else
    {
        printf("its a special character");
    }
}
