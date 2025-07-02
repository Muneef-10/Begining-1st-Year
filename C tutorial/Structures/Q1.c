//Create a structure type 'book' woth name, price, and number of pages as its attributes?

#include<stdio.h>
#include<string.h>
void main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    }a,b,c;

    strcpy(a.name,"Harry Potter");
    // printf("Enter the name of first book: ");
    // gets(a.name);
    printf("Enter the price of first book: ");
    scanf("%f",&a.price);
    printf("Enter the number of pages of first book: ");
    scanf("%d",&a.pages);
    //puts(a.name);
    printf("%s\n",a.name);
    printf("Price:- %0.2f\n",a.price);
    printf("Number of pages:- %d",a.pages);
}