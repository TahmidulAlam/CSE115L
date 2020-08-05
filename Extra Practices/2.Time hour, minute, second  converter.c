#include<stdio.h>

int main()
{
    int hour, minute;
    float x, second;

    printf("Enter time in seconds:\n");
    scanf("%f", &x);

    hour=(x/3600);
    minute=(x-(hour*3600))/60);
    second=(x-(hour*3600)-(minute*60));

    printf("%d hours %d minutes %f seconds", hour,  minute, second);

    return 0;
}
