/*Finding the value of function
f(x)=sqrt(3x^3 + 2x^2 + 4)using
pow() and sqrt() function*/

#include<stdio.h>
#include<math.h>

int main()
{
    double x, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);

    //using sqrt() and Pow() function for getting the result
    result = sqrt(3*pow(x,3)+2*pow(x,2)+4);

    printf("f(x)\n=(3x^3 + 2x^2 + 4)^(1/2)\n=(3(%lf)^3 + 2(%lf)^2 + 4)^(1/2)\n=(%lf)", x, x, result);
    return 0;
}
