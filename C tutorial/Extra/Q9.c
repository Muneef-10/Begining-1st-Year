/*Given a string of opening and closing paranthesis, design an algorithm and a program to find the length of the longest valid parenthesis substring. Valid parenthesis substring is a string which contains balanced parenthesis.*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void push(int ch,char st[],int *top,int n)
{
    (*top)++;
    st[*top]=ch;
}
void pop(int *top)
{
    (*top)--;
}
bool Isempty(int *top)
{
    return *top==-1;
}
int main()
{
    int n,top=-1,flag=0;
    char s[20];
    int a=0,x;
    printf("Enter limit: ");
    scanf("%d",&x);
    int arr[x];
    while(a!=x)
    {
    printf("Enter paranthesis:  ");
    scanf("%s",s);
    int count=0;
    n=strlen(s);
    char st[n];
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='(') push(s[i],st,&top,n);
        else if (s[i]==')'&&!Isempty(&top))
        {
            pop(&top);
            count++;
        }
        arr[a]=count;
        
    }
    a++;
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d\n",arr[i]*2);
    }
    
    return 0;
}