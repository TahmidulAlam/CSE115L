//Program to print the odd and even numbers of an array

#include<stdio.h>
void findEven(int A[],int N);                //declaring function prototypes
void findOdd(int A[],int N);

int main()
{
    int n, i;

    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];                                //declaring array

    printf("Enter integers:");

    for(i=0;i<n;i++)                         //taking inputs
    {
       scanf("%d",&a[i]);
    }

    printf("\nEven numbers:");
    findEven(a,n);                           //using function to print even numbers

    printf("\n\nOdd numbers:");              //using function to print odd numbers
    findOdd(a,n);

    printf("\n");

    return 0;
}

void findEven(int A[],int N)
{
    int i;
    for(i=0;i<N;i++)                         //using for loop to print the numbers
    {
       if(A[i]%2==0)                         //using if to find out if they are even
         printf("%d ",A[i]);
    }
}
void findOdd(int A[],int N)
{
    int i;
    for(i=0;i<N;i++)                         //using for loop to print the numbers
    {
       if(A[i]%2==1)                         //using of to find out if they are odd
         printf("%d ",A[i]);
    }
}
