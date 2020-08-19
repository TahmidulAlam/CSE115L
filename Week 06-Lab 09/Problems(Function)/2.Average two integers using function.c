//Program to find average of two integers using function

#include<stdio.h>
int computeAverage(int a,int b);          //Declaring function prototype

int main()
{
    int A, B, result;                     //Declaring variables for main function

    printf("Enter a:");
    scanf("%d", &A);                      //Taking inputs
    printf("Enter b:");
    scanf("%d", &B);

    result=computeAverage(A,B);           //Using the function to get average

    printf("Average is:%d", result);
    printf("\n\n");

    return 0;
}

//The function for getting average
int computeAverage(int a,int b)
{
    int average;                          //Declaring function variables

    average = (a+b)/2;

    return average;                       //returning the average to main function
}
