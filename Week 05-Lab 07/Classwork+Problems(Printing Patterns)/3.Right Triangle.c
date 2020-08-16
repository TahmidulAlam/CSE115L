//Program to print right triangles

#include<stdio.h>

int main()
{
    int n, i, j;                     //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //Taking inputs

    //Using nested loop for row and column
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
          printf("*");
       }
       printf("\n");
    }

    return 0;
}
