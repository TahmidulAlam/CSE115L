//Program to find the average of five numbers
#include<stdio.h>


int main()
{
    float a,b,c,d,e,x;
    printf("Enter 5 numbers:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    //using sum and division for getting the value of average
    x=(a+b+c+d+e)/5;

    printf("average is: %f", x);

    return 0;
}
