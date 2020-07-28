//program determine whether a number is positive or negative

#include <stdio.h>

int main()
{
    double num;

    printf("Enter a number:");
    scanf("%lf", &num);

    //using "if else" for different conditions
    if (num > 0)
        printf("%lf is  positive", num);
    else if (num==0)
        printf("%lf is neither positive nor negative", num);
    else
        printf("%lf is negative", num);

    return 0;
}
