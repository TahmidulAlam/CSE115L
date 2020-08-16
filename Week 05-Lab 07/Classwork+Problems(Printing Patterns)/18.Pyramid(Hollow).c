//Program to print hollow pyramid of stars

#include<stdio.h>

int main()
{
    int n, i, j;                     //declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //taking inputs

    //Using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       //printing spaces
       for(j=1;j<=n-i;j++)
       {
          printf(" ");
       }
       for(j=1;j<=2*i-1;j++)
       {
          //using if else to determine when to print stars or spaces for creating a hollow
          if(j==1||j==2*i-1||i==n)
            printf("*");
          else
            printf(" ");
       }
       //printing next line
       printf("\n");
    }
     return 0;
}
