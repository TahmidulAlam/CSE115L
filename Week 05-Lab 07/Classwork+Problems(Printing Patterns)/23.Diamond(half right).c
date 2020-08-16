//Program to print half right diamond of stars

#include<stdio.h>

int main()
{
    int n, i, j;                 //Declaring variables
    printf("Enter a number:");
    scanf("%d", &n);             //Taking inputs

    //Printing upper part
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)         //Printing stars
       {
          printf("*");
       }
       printf("\n");             //Next line
    }

    //Printing lower part
    for(i=1;i<=n-1;i++)
    {
       for(j=1;j<=n-i;j++)       //Printing stars
       {
          printf("*");
       }
       printf("\n");             //Next line
    }

    return 0;
}
