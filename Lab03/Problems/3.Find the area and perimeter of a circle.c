/*Program for taking radius as input
and finding the perimeter,area of circle*/

#include<stdio.h>
int main()
{
    double radius, perimeter, area;

    printf("Enter the radius:");
    scanf("%lf", &radius);

    //using general formula for finding area and perimeter
    // using the value of pi as 3.141592654
    perimeter=2*3.141592654*radius;
    area=3.141592654*radius*radius;

    printf("Area of the circle:%lf\nPerimeter of the circle:%lf", area, perimeter);

    return 0;
}
