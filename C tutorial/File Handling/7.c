//WAP to input no. in a file then read the number from the file if number is divisible by 5 then calculate sum of digit using function 
//and write it into another file otherwise calculate its product of digit using function.

#include<stdio.h>
int sod(int);
int pod(int);
void main()
{
    FILE *fp,*fs,*fi;
    int n,i,num;
    printf("Enter limit: ");
    scanf("%d",&n);
    fi = fopen("7i.txt","w+");
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&num);
        fprintf(fi,"%d ",num);
    }
    rewind(fi);
    fp = fopen("7p.txt","w+");
    fs = fopen("7s.txt","w+");
    while(fscanf(fi,"%d",&num)!= EOF)
    {
        if(num%5==0) fprintf(fs,"%d ",sod(num));
        else fprintf(fp,"%d ",pod(num));
    }
    rewind(fi);
    printf("All numbers are:- ");
    while (fscanf(fi,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }

    fclose(fi);
    rewind(fs);

    printf("\nSum of digit that are divisible by 5:- ");
    while (fscanf(fs,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }

    fclose(fs);
    rewind(fp);

    printf("\nProduct of numbers that are not divisible by 5:- ");
    while (fscanf(fp,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }
    fclose(fp);
}

int sod(int x)
{
    int s=0;
    while (x>0)
    {
        s=s+(x%10);
        x=x/10;
    }
    return s;
}

int pod(int y)
{
    int p=1;
    while (y>0)
    {
        p=p*(y%10);
        y=y/10;
    }
    return p;
}