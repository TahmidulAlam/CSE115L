//Passing arrays as function argument

#include<stdio.h>
double getAvg(double a[], int N);   //declaring a different function for finding average

int main()
{
    int i, n;
    printf("Enter how many numbers to average:");
    scanf("%d", &n);
    printf("\nEnter the numbers:");

    //declaring array for taking inputs
    double num[n];

    //using for loop for taking repeated inputs
    for(i=0;i<n;i++)
    {
       scanf("%lf", &num[i]);
    }

    //using the getAvg function
    double avg;
    avg=getAvg(num,n);

    printf("\n\nAverage=%lf", avg);

    return 0;
}

//getAvg function
double getAvg(double a[], int N)
{
    int j;
    double avg, sum=0;

    //using for loop for summation of all integer in array
    for(j=0;j<N;j++)
    {
       sum =sum+a[j];
    }

    avg=sum/N;

    //returning the average as function output
    return avg;
}

