//WAP to store char in a file then read the char from the file copy the char into another file in the toggle form.

#include<stdio.h>
void main()
{
    FILE *fp,*fo;
    char ch;
    fp= fopen("5_1.txt","w");
    printf("Enter characters: ");
    while ((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp = fopen("5_1.txt","r");
    fo = fopen("5_2.txt","w");
    while ((ch=getc(fp))!=EOF)
    {
        if(ch>='A' && ch<='Z') 
        {
            ch=ch+32;
        }
        else if(ch>='a' && ch<='z')
        {
            ch = ch-32;
        }
        fputc(ch,fo);
    }
    fclose(fp);
    fclose(fo);

    fp= fopen("5_1.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    fp= fopen("5_2.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);    
}