/*Design an algorithm and a program to implement stack using array. The program should implement following stack operation.
a)Create() - create an empty stack
b)Push() - push an element k into the stack
c)Pop() - pop an element from the stack and return it
d)IsEmpty() - check if stack is empty or not
e)Size() - find the size of the stack
f)Print() - prints the content of stack*/

#include<stdio.h>
#include<stdbool.h>
int push(int top,int n,int st[])
{
    if(top==n-1) printf("Stack is full");
    else
    {
        int x;
        printf("Enter element: ");
        scanf("%d",&x);
        top++;
        st[top]=x;
    }
    return top;
}
int pop(int st[],int top)
{
    if(top==-1) printf("Stack is empty\n");
    else 
    {
        printf("Deleted element: %d\n",st[top]);
        top--;
    }
    return top;
}
bool IsEmpty(int top)
{
    return top==-1;
}
int size(int top)
{
    return (top+1);
}
void print(int st[],int top)
{
    if (top==-1) printf("Stack is empty\n");
    else
    {
        printf("Stack: ");
    for (int i = 0; i<=top; i++)
    {
        printf("%d",st[i]);
    }
    printf("\n");
    }
    
}
int main()
{
    int n,s,top=-1;
    int a;
    printf("Enter size of an stack: ");
    scanf("%d",&n);
    int st[n];
    do
    {
        printf("\nPress [1] for push\nPress [2] for pop\nPress [3] to check stack is empty or not\nPress [4] to check the size of stack\nPress [5] for print\nPress [0] for exit\n");

        scanf("%d",&a);
        switch(a)
        {
            case 0:
                printf("Exit..");
                break;
            case 1:
                top=push(top,n,st);
                break;
            case 2:
                top=pop(st,top);
                break;
            case 3:
                if(IsEmpty(top)) printf("Stack is empty\n");
                else printf("Stack is not empty\n");
                break;
            case 4:
                s=size(top);
                printf("Size of stack: ",s);
                break;
            case 5:
                print(st,top);
                break;
            default:
            printf("Invalid input,try again");
        }
    }while(a!=0);
    return 0;
}