//Program to check whether the number is multiple of 7 or not

#include<stdio.h>

int main()
{
    int Z;

    printf("Enter a number:");
    scanf("%d", &Z);

    //using modulus to find remainder and determine multiple of 7 or not
    if(Z%7==0)
      printf("%d is a multiple of 7",Z);
    else
      printf("%d is not a multiple of 7",Z);

    return 0;
}
