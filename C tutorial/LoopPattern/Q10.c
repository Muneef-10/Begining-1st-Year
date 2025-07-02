/* 1
   AB
   123
   ABCD */

   #include<stdio.h>
   int main()
   {
    int n;
    printf("Enter the number of rows:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=65;
        for (int j = 1; j <=i; j++)
        {
            char ch=(char)a;
            if (i%2==0)
            {
                printf("%c",a);
                a++;
            }
            else
            {
                printf("%d",j);
            }
            
        }
        
        printf("\n");
    }
    
    return 0;
   }