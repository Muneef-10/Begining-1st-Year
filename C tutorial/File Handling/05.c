//WAP to store char in a file then read the char from the file copy the char into another file in the toggle form.

#include<stdio.h>
void main()
{
    FILE *fp, *fo;
    char ch;
    fp = fopen("5_1.txt","w+");
    printf("Enter characters: ");
    while ((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
    }

    rewind(fp);
    fo = fopen("5_2.txt","w+");
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

    rewind(fp);
    while ((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }

    rewind(fo);
    while ((ch=getc(fo))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    fclose(fo);

    
}


