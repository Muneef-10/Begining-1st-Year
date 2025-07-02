//Assume an array NUM[]={-111,555,-333,222,-444}.Demonstrate how the values of each of the negative numbers can be changed by adding a value of +50 using a pointer.

#include<stdio.h>
void main()
{
    int num[]={-111,555,-333,222,-444};
    int *p=num;
    for (int i = 0; i < 5; i++)
    {
        if(*(p+i)<0) *(p+i)=*(p+i)+50;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(p+i));
    }
    
}