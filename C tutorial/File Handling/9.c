//WAP to store information about inventory like name of product, quantity & price.WAP to calculate inventory cost of every product & print the name of
// those products whose inventory cost is more than 30,000.

#include<stdio.h>
void main()
{
    FILE *fp;
    int i,n,qua;
    float price ,cost;
    char ch[20];
    printf("Enter number of product:-");
    scanf("%d",&n);
    fp = fopen("9.txt","w+");
    for ( i = 0; i < n; i++)
    {
        printf("Enter name ,quantity,and price of %d product:\n",i+1);
        scanf("%s%d%f",ch,&qua,&price);
        fprintf(fp,"Name:-%s Quantity:-%d Price:-%0.2f",ch,qua,price);
    }
    rewind(fp);
    for ( i = 0; i < n; i++)
    {
        fscanf(fp,"%s%d%f",ch,&qua,&price);
        cost = qua*price;        
        if(cost>30000) printf("Cost = %0.2f",cost);
    }
    


    fclose(fp);
    

}