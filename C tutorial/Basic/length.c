//With the help of coordinates find the length of the line ?

#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2,p,q,z;
    printf("Enter the value of x1 and y1\n");
    scanf("%d\n%d",&x1,&y1);
    printf("Enter the value of x2 and y2\n");
    scanf("%d\n%d",&x2,&y2);
    p=pow((y2-y1),2);
    q=pow((x2-x1),2);
    z=sqrt(p+q);
    printf("length of line=%d",z);
}