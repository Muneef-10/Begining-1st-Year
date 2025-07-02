#include<stdio.h>
void greet()
{
    printf("Good morning\n");
    return;
}
int main()
{
    // greet();
    // greet();
    // greet();
    // greet();
    for(int i=1;i<=8;i++)
    {
        greet();
    }
    return 0;
}