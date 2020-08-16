//Program to print pyramid of stars

#include<stdio.h>

int main()
{
    int n, i, j;                     //declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //taking inputs

    //using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {

       //printing spaces
       for(j=1;j<=n-i;j++)
       {
         printf(" ");
       }

       //printing stars
       for(j=1;j<=2*i-1;j++)
       {
         printf("*");
       }
       printf("\n");
    }

     return 0;
}
