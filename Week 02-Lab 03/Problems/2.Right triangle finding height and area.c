/*Program that takes hypotenuse and base of a
right triangle as input and gives
height and area as output*/

#include<stdio.h>
#include<math.h>

int main()
{
    float b,h,A,hyp;

    printf("enter base:");
    scanf("%f", &b);

    printf("enter hypotenuse:");
    scanf("%f", &hyp);

    /*using Pythagoras Theorem and pow(),sqrt()function
     for finding height and area*/
    h=sqrt(pow(hyp,2)-pow(b,2));
    A=(b*h)/2;

    //using if else statement for different conditions
    if(b>hyp)
       printf("Base's length can't be longer than hypotenuse.");
    else
       printf("Height is:%f\nArea is:%f\n", h, A);

    if(A==0)
       printf("The triangle's three points are collinear,\n so area and height both are 0");

    return 0;
}
