//Program to print rhombus of stars

#include<stdio.h>

int main()
{
    int n, i, j;                      //declaring variables

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
       //Printing stars
       for(j=1;j<=n;j++)
       {
          printf("*");
       }
       printf("\n");
    }

    return 0;
}
