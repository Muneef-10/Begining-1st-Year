//WAP to store numbers in a file then read the numbers from that file then copy the content of this file in to 2 different files on the basis of even or odd.

#include<stdio.h>
void main()
{
    FILE *fp,*fe,*fo;
    int i, num, n;
    printf("Enter limit: ");
    scanf("%d",&n);
    fp = fopen("6.txt","w+");
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num);
        fprintf(fp,"%d ",num);
    }
    rewind (fp);
    fe = fopen("006.txt","w+");
    fo = fopen("06.txt","w+");
    while(fscanf(fp,"%d",&num)!=EOF)
    {
        if (num%2 == 0) 
        {
            fprintf(fe,"%d ",num);
        }
        else
        {
            fprintf(fo,"%d ",num);
        }
    }
    rewind(fp);
    printf("All nummbers are: ");
    while (fscanf(fp,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }

    fclose(fp);
    rewind(fe);

    printf("\nEven number are: ");
    while (fscanf(fe,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }

    fclose(fe);
    rewind(fo);

    printf("\nOdd number are: ");
    while (fscanf(fo,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }
    fclose(fo);
}