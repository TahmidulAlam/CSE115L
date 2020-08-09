#include<stdio.h>
#include<math.h>

int main()
{
    double a, x, result;

    printf("Enter the value of a:");
    scanf("%lf", &a);
    printf("Enter the value of x:");
    scanf("%lf", &x);

    result=pow(a,x);
    printf("a^x=%lf", result);

    return 0;
}
