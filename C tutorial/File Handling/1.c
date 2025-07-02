#include<stdio.h>
void main()
{
    FILE *ptr = NULL;
    char str[64] = "This content is produced by Khan";

    //   *****Reading a file*****
    // ptr = fopen("khan.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("The content of this file has: %s\n",str);

    //   *****Writing a file*****
    ptr = fopen("khan.txt","w");
    fprintf(ptr,"%s\n",str);

}