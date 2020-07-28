//Program to check whether the number is even or odd

#include<stdio.h>

int main()
{
    int Z;

    printf("Enter a number:");
    scanf("%d", &Z);

    //using modulus to find remainder and determine if it is even or odd
    if(Z%2==0)
      printf("%d is even",Z);
    else
      printf("%d is odd",Z);

    return 0;
}
