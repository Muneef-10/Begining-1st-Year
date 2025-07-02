#include<stdio.h>
void main()
{

    // In normal initialisation , we can modify inidividual character but not the ENTIRE string.
    // In Poiner initialisation we can modify entire string but not the individual character.
    char str[]= "College wallah";
    char*ptr=str;  //ptr now points to str[0]
    // printf("%p\n",&str[0]);
    // printf("%p",str );
    // str = "physics wallah"   it gives an error []
    // int i=0;
    // while (*ptr!='\0')
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }

    // char*ptr="Physics Wallah";    It printf College wallah
    // ptr="College Wallah";
    // printf("%s",ptr);

    // char str[]= "College wallah";
    // char*ptr=str;
    // ptr="Physics wallah";
    // str[0] = 'M';
    // printf("%s\n",ptr);  //print Physics wallah
    // printf("%s\n",str);  //print College wallah

    printf("%s",ptr);
}