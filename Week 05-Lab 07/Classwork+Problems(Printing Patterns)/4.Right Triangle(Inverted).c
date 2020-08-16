//Program to print inverted right triangle

#include<stdio.h>

int main()
{
    int n, i, j;                     //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //Taking inputs

    //Using nested for loop for rows and column
    for(i=1;i<=n;i++)
    {
       for(j=0;j<=n-i;j++)
       {
         printf("*");
       }
       printf("\n");
    }

     return 0;
}
