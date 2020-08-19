//Program to find out the sum of a square series

#include<stdio.h>
int sumSeries1(int a);                   //declaring function to find the summation of series

int main()
{
    int n, Sum;                          //Declaring variables
    printf("Enter a number:");
    scanf("%d", &n);                     //taking variable input

    Sum=sumSeries1(n);                   //using the function

    printf("The sum is:%d\n\n", Sum);    //Printing the Sum

    return 0;
}

//The int sumSeries(int N) function
int sumSeries1(int a)
{
    int i, sign=1, sum=0;               //Declaring function variables
    int A[a];                           //Declaring array to keep series terms

    for(i=0;i<a;i++)
    {
      A[i]=a-i;                         //keeping the series terms in array
    }

    for(i=0;i<a;i++)
    {
      sum=A[i]*A[i]*sign+sum;
      sign=-1*sign;                     //changing the value of sign every time to add and subtract
    }

    return sum;                         //returning the sum to main function
}


















