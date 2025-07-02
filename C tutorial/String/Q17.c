//WAP to read names of employees of certain organization. Store it in an appropriate datatype. then accept a name to be searched from the user in the accepted list, 
//if present display "Search is successful" otherwise display "Search is unsuccessful"

#include<stdio.h>
#include<string.h>
void main()
{
    int n,t=0;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    char name[n][20],s[20];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of employee %d: ",i+1);
        fflush(stdin);
        scanf("%[^\n]s",name[i]);
    }
    printf("Enter a name for searching: ");
    fflush(stdin);
    scanf("%[^\n]s",s);
    for (int i = 0; i < n; i++)
    {
        if(strcmp(name[i],s)==0) t=1;
    }
    if(t==1) printf("Search is successful");
    else printf("Search is unsuccessful");
    
    
}
