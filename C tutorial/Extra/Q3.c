/*Q-3)Given an array of nonnegative integers, where all numbers occur even number of
times except onenumber which occurs odd number of times. Write an algorithm and a program to find this
number.*/
#include<stdio.h>
#include<math.h>
void main(){
   int s;
   printf("Enter size of an array: ");
   scanf("%d",&s);
   int arr[s];
   printf("Enter %d elements of array: ",s);
   int a=0;
   for(int i=0;i<s;i++)
   {
        scanf("%d",&arr[i]);
        a=a^arr[i];
   }
   printf("Element that occur odd number of time is: %d",a);
}
