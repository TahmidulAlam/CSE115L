//Program to print arrows facing right

#include<stdio.h>

int main()
{
    int n, i, j;                 //Declaring variables
    printf("Enter a number:");
    scanf("%d", &n);             //Taking inputs

    //Printing the upper part
    for(i=1;i<=n;i++)
    {
       //Printing apaces
       for(j=1;j<=2*(i-1);j++)
       {
          printf(" ");
       }
       //Printing stars
       for(j=0;j<=n-i;j++)
       {
          printf("*");
       }
       printf("\n");
    }
    //Printing the lower part
    for(i=1;i<=n-1;i++)
    {
       //Printing spaces
       for(j=1;j<=2*(n-1-i);j++)
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
