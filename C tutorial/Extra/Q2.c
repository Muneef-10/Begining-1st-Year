/*Q-2) Given an unsorted array of integers and two numbers a and b. Design an algorithm 
and write a program to find minimum distance between a and b in this array. Minimum distance between 
anytwo numbers a and b present in array is the minimum difference between their indices*/
#include<stdio.h>
#include<math.h>
void main(){
   int a,b,s,l=0;
   printf("Enter the size of array: ");
   scanf("%d",&s);
   int arr[s];
   printf("Enter %d elements of array: ",s);
   for(int i=0;i<s;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Enter two elements to search their distance:\n ");
   scanf("%d%d",&a,&b);

   int pa=-1,pb=-1;
   int min=s-1;
   for(int i=0;i<s;i++){
      if(arr[i]==a) pa=i;
      if(arr[i]==b) pb=i;

      if(pa!=-1 && pb!=-1)
      {   
         if(pa>pb)  l=pa-pb;
         if(pb>pa)  l=pb-pa;
         if(min>l) min=l;
      }
      
   }
   if(pa==-1 || pb==-1)
   {
      printf("Number not found\n");
   }
   else
      printf("%d\n",min);
}
