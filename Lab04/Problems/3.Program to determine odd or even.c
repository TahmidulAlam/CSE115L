//Program to check whether the number is even or odd

#include<stdio.h>
int main()
{
    int i;

    printf("Enter a number:");
    scanf("%d", &i);

    if(i % 2 == 0)
      printf("%d is even", i);
    else
      printf("%d is odd", i);

    return 0;
}
