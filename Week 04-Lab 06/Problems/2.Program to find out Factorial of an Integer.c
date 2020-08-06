//Program to show the factorial of an integer

#include<stdio.h>

int main()
{
    int i, factorial=1, n;
    printf("Enter a number:");
    scanf("%d", &n);

    //using if else for negative integer
    if(n<0)
      printf("Math Error,cannot factorial negative number");

    else
    {
      //using for loop for repeated multiplication
      for(i=1;i<=n;i++)
      {
         factorial=factorial*i;
      }
         printf("Factorial of %d is %d", n, factorial);
    }

    return 0;
}
