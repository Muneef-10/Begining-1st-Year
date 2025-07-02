//design UDF compare 2 string using pointer if equal return 1 otherwise 0?

#include<stdio.h>
#include<string.h>
int eql(char *pa,char *pb,int x,int y)
{
    if(x!=y) return 0;
    else if (x==y)
    {
        for (int i = 0; *(pa+i)!='\0'; i++)
        {
            if(*(pa+i)!=*(pb+i))  
            {
                return 0;
                break;
            }
            else
            {
                return 1;
                break;
            }
        }
        
    }
    
}
void main()
{
    char a[50],b[50];
    printf("Enter first string: ");
    gets(a);
    int l1=strlen(a);
    printf("Enter second string: ");
    gets(b);
    int l2=strlen(a);
    int w=eql(a,b,l1,l2);
    if(w==1) printf("Equal");
    else printf("Unequal");
}