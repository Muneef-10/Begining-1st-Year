// WAP in 'C' t find the sum and average of 10 no.s using for while loop?

#include <stdio.h>
void main()
{
    int n,sum=0;
    for (int i = 0; i < 10; i++)                
    {
        printf("Enter the number: ");
        scanf("%d",&n);
        sum=sum+n;
    }
    float avg=sum/10;
    printf("sum=%d\navg=%.2f",sum,avg);
}

