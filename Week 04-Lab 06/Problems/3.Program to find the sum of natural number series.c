//Program to find the sum of natural number series

#include<stdio.h>

int main()
{
    int i=1, sum=0, N;

    printf("Enter Number:");
    scanf("%d", &N);

    //using if else in case of negative integer
    if(N<0)
      printf("Math Error");

    else
    {
      for(i=1;i<=N;i++)
      {
         //doing the calculation
         sum=sum+i;

         //printing the whole series with equal sign
         if(i==N)
           {
            printf("%d =",i);
            continue;
           }
         printf("%d + ",i);

      }
      printf(" %d\n", sum);
    }

    return 0;
}
