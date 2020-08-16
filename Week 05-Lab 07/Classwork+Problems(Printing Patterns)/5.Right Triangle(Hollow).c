//Program to print hollow right triangles

#include<stdio.h>

int main()
{
    int n, i, j;                      //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                  //Taking inputs

    //Nested for loop for printing rows and column
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
          //Using if else to determine when to print star or space for creating hollow
          if(j==1||j==i||i==1||i==n)
            printf("*");
          else
            printf(" ");
       }
       printf("\n");
    }

     return 0;
}
