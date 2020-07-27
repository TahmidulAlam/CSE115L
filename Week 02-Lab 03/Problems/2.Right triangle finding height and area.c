/*Program that takes hypotenuse and base of a
right triangle as input and gives
height and area as output*/

#include<stdio.h>
#include<math.h>
int main()
{
    double base,height,hypotenuse,area;

    printf("enter base:");
    scanf("%lf", &base);
    printf("enter hypotenuse:");
    scanf("%lf", &hypotenuse);

    /*using Pythagoras Theorem and pow(),sqrt()function
     for finding height and area*/
    height=sqrt(pow(hypotenuse,2)-pow(base,2));
    area=0.5*base*height;

    //using if else statement for different conditions
    if(base>hypotenuse)
       printf("base cannot be higher than hypotenuse");
    else if(base<hypotenuse)
       printf("Height is:%lf\nArea is:%lf\n", height, area);
    else
       printf("Height is:%lf\nArea is:%lf\nThe triangle is a degenerate triangle therefore area and height both are zero", height, area);


    return 0;
}
