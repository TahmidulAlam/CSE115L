#include<stdio.h>
double harmonicSum(int n);                         //declaring function prototype

int main()
{
    int N;                                         //declaring integer data type
    double Sum;                                    //declaring double data type

    printf("Enter number of terms for series:");
    scanf("%d", &N);                               //taking inputs
    printf("\n");

    Sum=harmonicSum(N);                            //using the function for result

    printf("Sum=%lf", Sum);
    printf("\n");

    return 0;
}

double harmonicSum(int n)
{
    //declaring function local integers
    double sum=0;
    int i;

    for(i=1;i<=n;i++)      //using for loop for calculation
    {
        sum=sum+(1.0/i);
    }

    return sum;            //returning the sum to main function
}
