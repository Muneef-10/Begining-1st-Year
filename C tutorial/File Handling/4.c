// WAP to input char in a file then read the char from the file and count how many of them are vowels.

#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int c=0;
    fp = fopen("4.txt","w");
    while((ch = getchar())!=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp = fopen("4.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') c++;
    }
    printf("Number of Vowels are: %d",c);
    fclose(fp);
}