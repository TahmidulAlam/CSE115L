//program to print full diamond of stars

#include<stdio.h>

int main()
{
    int n, i, j;                 //declaring variables
    printf("Enter a number:");
    scanf("%d", &n);             //taking inputs

    //Printing the upper part
    for(i=1;i<=n;i++)
    {
       //Printing spaces
       for(j=1;j<=(n-i);j++)
       {
          printf(" ");
       }
       //Printing stars
       for(j=1;j<=2*i-1;j++)
       {
          printf("*");
       }
       //nesxt line
       printf("\n");
    }
    //Printing the lower part
    for(i=1;i<=n-1;i++)
    {
       //Printing spaces
       for(j=1;j<=i;j++)
       {
          printf(" ");
       }
       //Printing stars
       for(j=1;j<=2*(n-i)-1;j++)
       {
          printf("*");
       }
       //Next line
       printf("\n");
    }

    return 0;
}
