/*Input two integers and output their
sum using printf and scanf*/

#include<stdio.h>
int main()
{
    int a, b, result;     //declaring data type of variable

    printf("a=");
    scanf("%d", &a);      //using scanf for keeping the variable in memory

    printf("b=");
    scanf("%d", &b);

    result = a + b;

    printf("a+b=%d", result);

    return 0;
}
