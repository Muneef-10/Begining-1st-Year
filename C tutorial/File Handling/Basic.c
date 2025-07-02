#include<stdio.h>
#include<stdlib.h>
int main()
{
    // FILE* ptr = fopen("khan.txt","r");
    // char a[100];  // fgets for read
    // while(fgets(a,100,ptr)!=NULL)  //if for single line and while for whole statemet
    // printf("%s",a);

    FILE *p=fopen("PW.txt","w");// create a file
    char a[]="I m from Bareilly";
    fputs(a,p);
    fclose(p);
}