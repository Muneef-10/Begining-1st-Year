#include<stdio.h>
void main()
{
    int nm,bill;
    printf("Enter nm");
    scanf("%d",&nm);
    bill=nm*5;
    if(bill>100)
    {
        bill=bill-10;
    }
    printf("Bill=%d",bill);
}    

