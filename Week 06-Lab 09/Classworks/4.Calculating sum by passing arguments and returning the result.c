/*Program to calculate sum of two number
using return type function*/

#include<stdio.h>
float sum(float x, float y);             //Declaring function for summation

int main()
{
    float X, Y, Z;                       //Declaring variable types

    printf("Enter two number:");
    scanf("%f %f", &X, &Y);              //Taking inputs

    Z=sum(X,Y);                          //using the function calculate

    printf("\n");
    printf("%f + %f = %f", X, Y, Z);     //Printing the results
    printf("\n");

    return 0;
}

//The float sum(float x, float y) function

float sum(float x, float y)
{
    float z;

    z= x + y;                            //Calculations for finding sum

    return z;
}
