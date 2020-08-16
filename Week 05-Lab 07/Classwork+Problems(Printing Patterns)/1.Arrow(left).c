//Program to print arrows facing left

#include<stdio.h>

int main()
{
    int n, i, j;                   //Declaring variables

    printf("enter value of n:");
    scanf("%d", &n);               //Taking Inputs

    //Printing Upper part
    for(i=1;i<=n;i++)
    {
       //Printing spaces
       for(j=n-i;j>=1;j--)
       {
          printf(" ");
       }
       //Printing stars
       for(j=n-i;j>=0;j--)
       {
          printf("*");
       }
       printf("\n");
    }
    //Printing lower part
    for(i=1;i<=n-1;i++)
    {
       //Printing spaces
       for(j=1;j<=i;j++)
       {
          printf(" ");
       }
       //Printing stars
       for(j=0;j<=i;j++)
       {
          printf("*");
       }
       printf("\n");
    }

    return 0;
}
