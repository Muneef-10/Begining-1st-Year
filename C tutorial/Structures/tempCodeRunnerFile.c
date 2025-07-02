//Min distance b/w given elems.
#include<stdio.h>
#include<math.h>
void main(){
   int a,b,n;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array elements:\n");
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   printf("Enter elements to search distance\n");
   scanf("%d%d",&a,&b);

   int pos_a=-1,pos_b=-1;
   int min=n-1;
   for(int i=0;i<n;i++){
      if(arr[i]==a) pos_a=i;
      if(arr[i]==b) pos_b=i;

      if(pos_a!=1 && pos_b!=-1){
         int d = (pos_a-pos_b>0)?pos_a-pos_b:pos_b-pos_a;
         if(min>d) min = d;
      }
   }
   if(pos_a==-1 && pos_b==-1){
      printf("Not found\n");
   }
   else{
      printf("%d\n",min);
   }

   

}
