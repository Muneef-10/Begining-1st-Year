#include<stdio.h>
void fun();
int main()
{
    //prototype.......after this line sequence doesn't matter.
    fun();
    return 0;
}
void fun()
{
    printf("Hello world");
    return;
}