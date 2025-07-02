#include<stdio.h>
void England()
{
    printf("I m in England\n");//6
    return;//7
}
void Australia()
{
    printf("I m in Australia\n");//4
    England();//5
    return;//8
}
void India()
{
    printf("I m in India\n");//2
    Australia();//3
    return;//9
}
int main()
{
    India();//1
    return 0;//10
}