//insert          
//armstrong       
//perfect         
//delet                        
                 
                 


#include<stdio.h>
void main()
{
    int n,num,p;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter position: ");
    scanf("%d",&p);
    printf("Enter num: ");
    scanf("%d",&num);
    n++;
    for (int i = n; i > p-1; i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=num;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
    
       
}