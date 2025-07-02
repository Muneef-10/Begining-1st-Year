#include<stdio.h>
void main()
{
    char s1[]="Physics Wallah";
    // char *s2=s1;   ==> s2 is shallow copy
    // s1[0]='M';
    // printf("%s",s1);

    // Deep copy ==>

    char *s2;
    s2=s1;
    // s2[0]='M';
    printf("%s\n",s1);
    printf("%s",s2);
}