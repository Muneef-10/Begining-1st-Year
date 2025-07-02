/* Given an array of integers, write an algorithm and a program to left rotate the array
by specific number of elements*/
#include<stdio.h>
#include<stdbool.h>
void rev(int arr[],int i,int j)
{
   while(i<j)
   {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
   }
}
int main()
{
   int s,a;
   printf("Enter size of an array: ");
   scanf("%d",&s);
   int arr[s]; 
   printf("Enter %d elements of array: ",s);
   for(int i=0; i<s; i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Enter value of a: ");
   scanf("%d",&a);
   a = a%s;
   rev(arr,0,a-1);
   rev(arr,a,s-1);
   rev(arr,0,s-1);
   
   printf("Rotated array is: ");
   for(int i=0; i<s; i++)
   {
     printf("%d ",arr[i]);
   }
   return 0;
}