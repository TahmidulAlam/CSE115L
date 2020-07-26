//Program to check whether the number is multiple of 7 or not

#include<stdio.h>
int main()
{
    int i;

    printf("Enter a number:");
    scanf("%d", &i);

    if(i % 7 == 0)
      printf("%d is a multiple of 7", i);
    else
      printf("%d is not a multiple of 7", i);

    return 0;
}
