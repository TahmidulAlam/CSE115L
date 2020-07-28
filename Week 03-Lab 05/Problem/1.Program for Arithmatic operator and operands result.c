/*Writing a program using "switch case"
 that takes an operator and two operands and
 performs calculation*/

#include<stdio.h>
int main()
{
    //declaring data type of variables
    double a, b, w, x, y, z;
    char operator;

    printf("Enter an operator:");
    scanf("%c", &operator);
    printf("Enter 1st operand:");
    scanf("%lf", &a);
    printf("Enter 2nd operand:");
    scanf("%lf", &b);

    //statements for calculation
    w=a+b;
    x=a-b;
    y=a*b;
    z=a/b;

    //switch case for different operator choices
    switch(operator)
    {
       case '+' :
         printf("the result is:%lf", w);
         break;
       case '-' :
         printf("the result is:%lf", x);
         break;
       case '*' :
         printf("the result is:%lf", y);
         break;
       case '/' :
         /*nested switch case for special condition
           when divided by zero*/
         switch((int)b)
         {
            case 0:
              printf("Math error");
              break;
            default:
              printf("The result is:%lf", z);
         }
         break;
       default:
         printf("Invalid operator");
    }

    return 0;
}
