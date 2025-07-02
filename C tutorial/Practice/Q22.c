// PYQ 2023 april Q3(c) take 2 numbers return modulus and product using UDF and pointer ?

#include<stdio.h>
void cal(int n,int m,int *mod,int *pro)
{
    *mod=n%m;
    *pro=n*m;
}
void main()
{
    int n,m,mod=0,pro=0;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n,&m);
    cal(n,m,&mod,&pro);
    printf("Modulus of these number is: %d\nProduct of these number is: %d",mod,pro);
}