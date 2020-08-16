//Program to print inverted hollow pyramid of stars


#include<stdio.h>

int main()
{
    int n, i, j;                     //declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //taking inputs

    for(i=1;i<=n;i++)
    {
       //using nested for loop for rows and columns
       for(j=1;j<=i-1;j++)
       {
          printf(" ");
       }
       for(j=0;j<=2*(n-i);j++)
       {
          //using if else to determine when to print stars or spaces for hollow
          if(i==1||j==0||j==2*(n-i))
            printf("*");
           else
            printf(" ");
       }
       //Printing nest line
       printf("\n");
    }

    return 0;
}
