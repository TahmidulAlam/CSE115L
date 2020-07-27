//Program to check whether the number is even or odd

#include<stdio.h>
int main()
{
    int i;

    printf("Enter a number:");
    scanf("%d", &i);

    //using modulus to find remainder and determine if it is even or odd
    if(i % 2 == 0)
      printf("%d is even", i);
    else
      printf("%d is odd", i);

    return 0;
}
