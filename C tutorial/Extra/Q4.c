/*Given a matrix of size n X n, where every row and every column is sorted in 
increasing order. Write an algorithm and a program to find whether the given key 
element is present in the matrix or not.*/
#include<stdio.h>
#include<stdbool.h>

bool search(int s,int a[][s],int k)
{
    int i=0,j=s-1;
    while(i<s && j>=0){
        if(a[i][j]==k) return true;
        else if(a[i][j]>k)j--;
        else i++;
    }
    return false;
}

void main(){
   int s,k;
   printf("Enter the size of a square matrix: ");
   scanf("%d",&s);

   int a[s][s];
   printf("Enter matrix elements:\n");
   for(int i=0;i<s;i++)
   {
      for(int j=0;j<s;j++)
      {
        scanf("%d",&a[i][j]);
      }
   }
   printf("Enter the key element: ");
   scanf("%d",&k);
   if(search(s,a,k))  printf("Present\n");
   else  printf("Not present\n");
}
