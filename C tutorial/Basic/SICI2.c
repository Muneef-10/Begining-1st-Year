#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,SI,CI;
    printf("Enter the principle value,rate,time\n");
    scanf("%f\n%f\n%f",&p,&r,&t);
    SI=(p*r*t)/100;
    CI=p*(pow(1+r/100,t)-1);
    printf("SI=%f\nCI=%f",SI,CI);
}