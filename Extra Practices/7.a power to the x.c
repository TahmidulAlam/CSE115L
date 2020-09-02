#include<stdio.h>
#include<math.h>                        //including <math.h> for using pow function

int main()
{
    double a, x, result;                //Declaring "double" data type of varaible

    printf("Enter the value of a:");
    scanf("%lf", &a);                   //taking inputs
    printf("Enter the value of x:");
    scanf("%lf", &x);

    printf("\n");

    result=pow(a,x);                    //calculating the result using pow function
    printf("a^x=%lf", result);          //printing the result

    printf("\n");

    return 0;
}
