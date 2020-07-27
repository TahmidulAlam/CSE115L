/*Input a floating point number
and output the same number
using scanf and printf function*/


#include<stdio.h>
int main()
{
    float a;                           //declaring data type of the variable
    printf("Enter a number:");
    scanf("%f",&a);
    printf("The number you entered is %f", a);
    return 0;
}
