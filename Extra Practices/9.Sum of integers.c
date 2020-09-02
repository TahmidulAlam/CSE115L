#include<stdio.h>
int sum(int n);                            //declaring function prototype

int main()
{
    int N, Sum;                            //declaring integer variables

    printf("Enter a number:");
    scanf("%d", &N);
    printf("\n");

    Sum=sum(N);                            //using the return type function for calculating sums

    printf("The sum is: %d", Sum);         //printing the result
    printf("\n");

    return 0;
}

//function for calculating sums
int sum(int n)
{
    int i, sum=0;

    for(i=1;i<=n;i++)                      //using for loop for summation
    {
       sum=sum+i;
    }

    return sum;                            //returning the sum to main function
}
