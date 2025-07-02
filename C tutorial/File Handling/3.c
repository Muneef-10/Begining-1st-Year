//WAP to store characters in a file then read the char from the file and print it to the output screen.

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("3.txt","w");
    printf("Enter character: ");
    while((ch=getchar())!=EOF)
    {
        fprintf(fp,"%c",ch);  //putc(ch,fp); or fputc
    }
    fclose(fp);
    fp = fopen("3.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);    //putchar(ch); we can also use it
    }
    fclose(fp);
}