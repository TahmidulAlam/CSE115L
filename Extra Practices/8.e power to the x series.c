#include<stdio.h>

int main()
{
    int i, n;                            //declaring integer type variables
    double x, term=1, sum=1;             //declaring double type variables and their initial values

    printf("Enter the value of x:");
    scanf("%lf", &x);                    //taking inputs
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\n");

    //using if else statement for printing invalid input
    if(n>=0)
    {
      //using for loop for calculating the terms and their summation
      for(i=1;i<=n;i++)
      {
         term=term*x/i;
         sum=sum+term;
      }
         printf("sum=%lf", sum);         //printing the results
    }
    else
      printf("Invalid Input");

    printf("\n");

    return 0;
}
