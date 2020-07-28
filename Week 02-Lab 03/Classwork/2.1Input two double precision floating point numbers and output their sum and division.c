/*Input two double precision floating point numbers
and  output their sum and division as integer*/

#include<stdio.h>
int main()
{
    double a, b;     //declaring data type of the variable
    int x, y;

    printf("a=");
    scanf("%lf", &a);    //putting the value of "a" in memory using scan f

    printf("b=");
    scanf("%lf", &b);

    x=a+b;
    y=a/b;

    printf("%lf + %lf = %d\n", a, b, x);
    if(b==0)
      printf("Math Error,cannot divide by zero");
    else
      printf("%lf / %lf = %d\n", a, b, y);

    return 0;
}
