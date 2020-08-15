//Program to print fibonacci series

#include<stdio.h>
int main()
{
    int i,n;                      //Declaring variables

    printf("Enter a number:");
    scanf("%d", &n);              //Taking Inputs
    int a[n];                     //Using array to keep inputs
    a[0]=0;                       //declaring first variable of array
    a[1]=1;                       //declaring first variable of array

    printf("Fibonacci Series:");

    for(i=2;i<=n;i++)
    {
       a[i]=a[i-1]+a[i-2];        //calculation for fibonacci series
    }
    for(i=0;i<=n-1;i++)
    {
       printf("%d ", a[i]);       //Printing the fibonacci series
    }

    printf("\n\n");

    return 0;
}
