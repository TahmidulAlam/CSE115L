//Program to print hollow square of stars

#include<stdio.h>

int main()
{
    int n, i, j;                       //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                   //Taking inputs

    //using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
          //Using if else to determine when to print stars or spaces to create hollow
          if(i==1||i==n||j==1||j==n)
            printf("*");
          else
            printf(" ");
       }

       printf("\n");
    }
     return 0;
}
