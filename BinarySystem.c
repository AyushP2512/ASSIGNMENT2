   
#include <stdio.h>
//NAME : Ayush Sharma
//Scholar Id:2012105
int prod(int bin1, int bin2)
{
    int i = 0, remainder = 0, sum[20];
    int binprod = 0;
 
    while (bin1 != 0 || bin2 != 0)
    {
        sum[i++] =(bin1 % 10 + bin2 % 10 + remainder) % 2;
        remainder =(bin1 % 10 + bin2 % 10 + remainder) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binprod = binprod * 10 + sum[i--];
    return binprod;
}
 
int main()
{
 
    long b1, b2,multiply=0;
   
    int i = 0, remainder = 0, sum[20], digit, fact = 1;
 

   
   
    while(1)
    {
    printf("Enter the Choice :\n");
    printf("1.Addition\n2.Multiplication\n3.Exit\n");
    int select;
      scanf("%d",&select);
      if(select==1){
           printf("Enter the first binary number: ");
    scanf("%ld", &b1);
    printf("Enter the second binary number: ");
    scanf("%ld", &b2);
    while (b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + remainder) % 2;
        remainder =(b1 % 10 + b2 % 10 + remainder) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);

      printf("\n");}

      else if(select==2){
              printf("Enter the first binary number: ");
    scanf("%ld", &b1);
    printf("Enter the second binary number: ");
    scanf("%ld", &b2);
    while (b2 != 0)
    {
        digit =  b2 % 10;
        if (digit == 1)
        {
            b1 = b1 * fact;
            multiply = prod(b1, multiply);
        }
        else
            b1 = b1 * fact;
        b2 = b2 / 10;
        fact = 10;
    }
    printf("Product of two binary numbers: %ld", multiply);
    printf("\n");

      }
      else if(select==3){
          break;
      }
    }
    return 0;
}
