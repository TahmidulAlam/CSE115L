//Program to print the n-th term of Fibonacci sequence using function

#include<stdio.h>
int fibonacci(int n);                              //Declaring function prototype

int main()
{
    int N, result;                                 //Declaring main function integer variables
    printf("Enter the Fibonacci term number:");
    scanf("%d", &N);                               //Taking input

    result = fibonacci(N);                         //using the function

    printf("fibonacci(%d)=%d", N, result);
    printf("\n");

    return 0;
}

//The function to print n-th term of fibonacci sequence
int fibonacci(int n)
{
    int a[n-1];                             //Declaring array for keeping the Fibonacci numbers in array
    int i;                                  //loop variable

    a[0]=0;                                 //fixing first two variables of array
    a[1]=1;

    for(i=2;i<=n-1;i++)                        //using for loop to find all the Fibonacci terms till (n-1)
    {
       a[i]=a[i-1]+a[i-2];
    }

    return a[n-1];                          //Returning the n-th term to main function
}
