/*Given an expression string consisting of opening and closing brackets"{","}","[","]","(",")" design an algorithm and a program to check 
whether this expression has balanced paranthesis or not.*/

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
    int x;
    printf("Enter limit: ");
    scanf("%d",&x);
    char s[20];
    for(int a=0;a<x;a++)
    {
        printf("Enter paranthesis: ");
        scanf("%s",&s);  
        int top=-1,n;
        n=strlen(s);
        char st[n];
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') 
            {
                push(s[i],st,&top,n);
            }
            else if ((s[i]==')'&&!Isempty(&top)&&st[top]=='(') || (s[i]=='}'&&!Isempty(&top)&&st[top]=='{') || (s[i]==']'&&!Isempty(&top)&&st[top]=='['))
            {
                pop(&top);
            }
            
            
        }
        if(Isempty(&top)) 
        {
            printf("Balanced\n");
        }
        else
        {
            printf("Unbalanced");
        }
        
    }

    return 0;
}