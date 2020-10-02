//Program to Find nCr using recursion

#include<stdio.h>
int C(int n, int r);

int main()
{
    int n, r, result;

    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    if(n<r||n<0||r<0)
      printf("Invalid Input");
    else
    {
      result=C(n,r);
      printf("\n%dC%d is %d\n", n, r, result);
    }

    return 0;
}

int C(int n, int r)
{
     if(n==r)
       return 1;
     else if(r==0)
       return 1;
     else
       return(C(n-1,r-1)+C(n-1,r));
}
