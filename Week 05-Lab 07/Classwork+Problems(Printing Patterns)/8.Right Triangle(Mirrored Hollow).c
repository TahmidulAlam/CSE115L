//Program to print mirrored hollow right triangles

#include<stdio.h>

int main()
{
    int n, i, j;                      //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                  //Taking inputs

    //Using nested for loop for rows and columns
    for(i=1;i<=n;i++)
     {
       //Printing spaces
       for(j=1;j<=n-i;j++)
       {
         printf(" ");
       }
       for(j=1;j<=i;j++)
       {
          //Using if else to determine when to print stars or spaces for creating hollow
          if(i==n||j==1||j==i)
            printf("*");
          else
            printf(" ");
       }
       printf("\n");
    }

     return 0;
}
