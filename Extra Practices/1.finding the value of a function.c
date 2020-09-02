#include<stdio.h>
#include<math.h>

int main()
{
    double x, result1, result2;             //declaring data type of variables

    printf("Enter a number:\n");
    scanf("%lf", &x);                       //scanning the input

    result1=(pow(x,3)+pow(x,2)-12*x-12);    //calculations for the functions
    result2=sqrt(result1);

    if(result1<0)                           //using if else for invalid input
      printf("Math Error,cannot square root negative number");
    else
      printf("f(%lf)=%lf", x, result2);     //printing the result

    return 0;
}









