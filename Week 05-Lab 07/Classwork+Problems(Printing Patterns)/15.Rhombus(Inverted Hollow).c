//Program to print inverted hollow rhombus of stars

#include<stdio.h>

int main()
{
    int n, i, j;                      //declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                   //taking inputs

    //using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       //printing spaces
       for(j=1;j<=i-1;j++)
       {
         printf(" ");
       }
       for(j=1;j<=n;j++)
       {
          //using if else to determine when to print star or space for creating hollow
          if(i==1||i==n||j==1||j==n)
            printf("*");
          else
            printf(" ");
       }
       printf("\n");
    }

     return 0;
}
