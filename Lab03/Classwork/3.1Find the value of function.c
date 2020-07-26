/*finding the value of function
f(x) = 2x^2 + 3x + 1*/

#include<stdio.h>
#include<math.h>

int main()
{
    double x, result;
    printf("Enter the value of x=");
    scanf("%lf", &x);

    //using pow() to get the power of x
    result=2*pow(x,2)+3*x+1;
    printf("f(x)\n=2x^2 + 3x + 1\n=2*(%lf)^2+3*(%lf)+1\n=%lf", x, x, result);

    return 0;
}
