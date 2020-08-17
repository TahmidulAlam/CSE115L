//Program to calculate sum by passing arguments to function

#include<stdio.h>
void computeSum(float x, float y);      //declaring function for computing

int main()
{
    float var1, var2;                   //Declaring variables

    printf("Enter two number:");
    scanf("%f %f", &var1, &var2);

    printf("\n");

    computeSum(var1 , var2);            //calling the function in main function to compute sum

    printf("\n");

    return 0;
}

//The void computeSum(float x, float y) to compute

void computeSum(float x, float y)
{
    float sum;

    sum=x+y;                            //calculation for the result

    printf("%f + %f = %f", x, y, sum);  //Printing the result
}
