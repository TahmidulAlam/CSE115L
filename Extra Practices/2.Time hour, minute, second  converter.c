#include<stdio.h>

int main()
{
    int hour, minute;                    //declaring hour and minute as integer data type
    float x, second;                     //declaring second as float variable

    printf("Enter time in seconds:\n");
    scanf("%f", &x);                     //taking input

    //calculations for converting second into hour and minute
    hour=(x/3600);
    minute=(x-(hour*3600))/60;
    second=(x-(hour*3600)-(minute*60));

    //printing the results
    printf("%d hours %d minutes %f seconds", hour,  minute, second);

    return 0;
}
