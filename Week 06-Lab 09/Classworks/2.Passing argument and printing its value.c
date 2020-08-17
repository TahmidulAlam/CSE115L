//Printing a value using function

#include<stdio.h>
void printValue(float X);                     //Declaring the function to print value

int main()
{
    float x, y;                               //Declaring variables

    printf("Enter a value:");                 //Taking inputs from user
    scanf("%f", &x);
    printf("\nEnter another value:");
    scanf("%f", &y);

    printf("\nThe values you entered are:");

    printValue(x);                            //Using the printValue function to print the numbers
    printValue(y);

    printf("\n");

    return 0;
}

void printValue(float X)
{
    printf("%f  ", X);
}
