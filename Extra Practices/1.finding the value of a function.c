#include<stdio.h>
#include<math.h>

int main()
{
    double x, result1, result2;

    printf("Enter a number:\n");
    scanf("%lf", &x);

    result1=(pow(x,3)+pow(x,2)-12*x-12);
    result2=sqrt(result1);

    if(result1<0)
      printf("Math Error,cannot square root negative number");
    else
      printf("f(%lf)=%lf", x, result2);

    return 0;
}









