//Program to print inverted pyramid

#include<stdio.h>

int main()
{
    int n, i, j;                     //declaring varaibles

    printf("Enter number of rows:");
    scanf("%d", &n);                 //taking inputs

    //Using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       //printing spaces
       for(j=1;j<=i-1;j++)
       {
          printf(" ");
       }
       //printing stars
       for(j=0;j<=2*(n-i);j++)
       {
          printf("*");
       }
       //next line
       printf("\n");
    }

    return 0;
}
