//Program to find Fibonacci number using recursion

#include<stdio.h>
int F(int n);

int main()
{
    int N, Result;
    printf("Enter which no. Fibonacci number: ");
    scanf("%d",&N);

    if(N<0)
      printf("\nInvalid Input\n");
    else
    {
      Result=F(N);
      printf("\n%d no. Fibonacci number is: %d\n", N, Result);
    }

    return 0;
}

int F(int n)
{
     if(n==0)
       return 0;
     else if(n==1)
       return 1;
     else
       return (F(n-1)+F(n-2));
}
