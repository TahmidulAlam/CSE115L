/*Program for taking radius as input
and finding the perimeter,area of circle*/

#include<stdio.h>
#include<math.h>

int main()
{
    float r,C,A;
    float pi=3.1416;

    printf("Enter the radius:");
    scanf("%f", &r);

    //using general formula for finding area and perimeter
    // using the value of pi as 3.141592654
    C=2*pi*r;
    A=pi*pow(r,2);

    printf("Area of the circle:%f\nPerimeter of the circle:%f", A, C);

    return 0;
}
