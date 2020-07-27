/*Input an integer number and
output the same number using
printf function*/

#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number: ");
    //scanf function for scanning the variable
    scanf("%d", &var);
    //printf function for printing the variable
    printf("The number you entered is %d", var);
    return 0;
}
