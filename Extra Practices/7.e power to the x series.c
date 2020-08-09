#include<stdio.h>

int main()
{
    int i, n;
    double x, term=1, sum=1;

    printf("Enter the value of x:");
    scanf("%lf", &x);
    printf("Enter the value of n:");
    scanf("%d", &n);

    if(n>=0)
    {
      for(i=1;i<=n;i++)
      {
         term=term*x/i;
         sum=sum+term;
      }
         printf("sum=%lf", sum);
    }
    else
      printf("Invalid Input");

    return 0;
}
