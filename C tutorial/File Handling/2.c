#include<stdio.h>
#include<string.h>
void main()
{
    FILE *ptr = NULL;
    ptr = fopen("2.txt","r");

    // char c = fgetc(ptr);
    // printf("%c",c);  

    char str[100];
    fgets(str,100,ptr);
    printf("String is: %s",str);

    // fputc('A',ptr);
    // fputs(" This is Khan",ptr);

    fclose(ptr);
}