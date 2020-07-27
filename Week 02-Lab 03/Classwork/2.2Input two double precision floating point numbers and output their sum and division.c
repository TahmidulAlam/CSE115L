/*Input two double precision floating point numbers
and also output their sum and division as double-float numbers*/

#include<stdio.h>
int main()
{
    double a, b, x, y;     //declaring data type of the variable


    printf("a=");
    scanf("%lf", &a);    //putting the value of "a" in memory using scan f

    printf("b=");
    scanf("%lf", &b);

    x=a+b;
    y=a/b;

    printf("%lf + %lf = %lf\n", a, b, x);
    printf("%lf / %lf = %lf\n", a, b, y);

    return 0;
}
