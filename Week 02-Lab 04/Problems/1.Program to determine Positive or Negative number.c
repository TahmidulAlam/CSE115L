//program determine whether a number is positive or negative


#include <stdio.h>
int main()
{
    float x;

    printf("Enter a number:");
    scanf("%f", &x);
    //using "if else-if" for different conditions
    if (x > 0)
        printf("%f is  positive", x);
    else if (x < 0)
        printf("%f is negative", x);
    else
        printf("%f is neither positive nor negative", x);

    return 0;
}
