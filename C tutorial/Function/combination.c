#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i = 1; i <=x; i++)
    {
        fact=fact*i;
    }
        return fact;
}
void main()
{
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");     //n and r are formal parameter and values of these eg 2,6 are actual parameter
    scanf("%d",&r);
    int nfact=factorial(n); //n!
    int rfact=factorial(r); //r!
    int nrfact=factorial(n-r); //n-r!
    int ncrfact=nfact/(rfact*nrfact);
    printf("%d\n",ncrfact);
}

// #include<stdio.h>
// int fact(int x)
// {
//     int factorial=1;
//     for (int i = 1; i <=x; i++)
//     {
//         factorial=factorial*i;
//     }
//     return factorial;    
// }
// int main()
// {
//     int n,r;
//     printf("Enter the value of n and r\n");
//     scanf("%d%d",&n,&r);
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     printf("Value of nCr=%d",ncr);
// }
