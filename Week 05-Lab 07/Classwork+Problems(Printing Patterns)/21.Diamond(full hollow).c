//Program to print full hollow diamond of stars

#include<stdio.h>
int main()
{
    int n, i, j;                  //declaring variables
    printf("Enter a number:");
    scanf("%d", &n);              //taking inputs

    //Printing upper part
    for(i=1;i<=n;i++)
    {
       for(j=0;j<=(n-i);j++)      //Printing stars
       {
          printf("*");
       }
       for(j=1;j<=2*(i-1);j++)    //printing spaces
       {
          printf(" ");
       }
       for(j=0;j<=n-i;j++)        //printing stars
       {
          printf("*");
       }
       printf("\n");              //next line
    }

    //Printing lower part
    for(i=1;i<=n-1;i++)
    {
       for(j=0;j<=i;j++)          //printing stars
       {
          printf("*");
       }
       for(j=1;j<=2*(n-i-1);j++)  //printing spaces
       {
          printf(" ");
       }
       for(j=0;j<=i;j++)          //printing stars
       {
          printf("*");
       }
       printf("\n");              //next line
    }

    return 0;
}
