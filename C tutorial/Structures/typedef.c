/*typedef syntax
typedef old_name new_name;
compiler use new name in place of old name

typedef struct Book 
{
    char name [30];
    int rn;
    float marks;
}MK;  Now, in place of 'struct book' we can use 'MK'.
*/

#include<stdio.h>
typedef float realNumber;  // with the help of this in place of float we can use realNumber.

void main()
{
    int x;
    realNumber y=5.169286;
    printf("%f",y);
}