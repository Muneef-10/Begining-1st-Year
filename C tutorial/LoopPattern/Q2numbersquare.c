/*1234
  1234
  1234 
  1234 */

  #include<stdio.h>
  int main()
  {
    int n;
    printf("Enter the number:  ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++) // no. of rows --> i
    {
      for (int j = 1; j <=n; j++) // no. of coloums -->j
      {
        printf("%d ",j);
      }
      printf("\n");      
    }
    return 0;
  }