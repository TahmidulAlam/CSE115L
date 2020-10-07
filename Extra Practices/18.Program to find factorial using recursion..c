//Program to find factorial using recursion

#include<stdio.h>
int Fact(int n);

int main()
{
    int n, Result;
    printf("Enter which number to factorial: ");
    scanf("%d",&n);

    if(n<0)                                           //precondition
      printf("Invalid Input");
    else
    {
      Result=Fact(n);
      printf("\n%d factorial is %d\n", n, Result);
    }

    return 0;
}

int Fact(int n)
{
    if(n==0)                                          //base conditions
      return 1;
    else
      return(n*Fact(n-1));
}
