//Program to print hollow rhombus of stars

#include<stdio.h>
int main()
{
    int n, i, j;                      //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                  //taking inputs

    //Using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       //printing spaces
       for(j=1;j<=n-i;j++)
       {
          printf(" ");
       }
       //printing stars
       for(j=1;j<=n;j++)
       {
          //Using if else to determine when to print stars and space for creating hollow
          if(j==1||j==n||i==1||i==n)
            printf("*");
          else
            printf(" ");
       }
       printf("\n");
    }
     return 0;
}
