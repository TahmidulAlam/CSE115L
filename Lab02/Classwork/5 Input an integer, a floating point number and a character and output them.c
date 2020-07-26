/*Input an integer, a floating point number
and a character and output them
using scanf and prinf function*/

#include<stdio.h>
int main()
{
    int a;               //declaring data type of the variable//
    float b;
    char c;

    printf("Enter a character:\n");
    scanf("%c", &c);
    printf("The character you entered is:%c\n", c);


    printf("Enter a integer:\n");
    scanf("%d", &a);
    printf("The integer you entered is:%d\n", a);

    printf("Enter a number:\n");
    scanf("%f", &b);
    printf("The number you entered is:%f\n", b);

    return 0;
}
