//Program to find Tribonacci number using recursion

#include<stdio.h>
int T(int n);

int main()
{
    int n, result;

    printf("Enter which no. Tribonacci Number: ");
    scanf("%d", &n);


    if(n<0)
      printf("\nInvalid Input\n");
    else
    {
      result=T(n);
      printf("\n%d no. Tribonacci is %d\n", n, result);
    }

    return 0;
}

int T(int n)
{
    if(n==0)
      return 0;
    else if(n==1)
      return 1;
    else if(n==2)
      return 1;
    else
      return (T(n-1)+T(n-2)+T(n-3));
}
