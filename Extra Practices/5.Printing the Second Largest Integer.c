#include<stdio.h>

int main()
{
    int a, b, c;                                //declaring integer data type of variables

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);              //taking inputs
    printf("\n");

    //using nested if else for different conditions within condition
    if(a>b&&a>c)
    {
       if(b>c)
         printf("Second largest is %d", b);     //printing the results
       else
         printf("Second largest is %d", c);
    }
    else if(a<b&&a<c)
    {
       if(b>c)
         printf("Second largest is %d", c);
       else
         printf("Second largest is %d", b);
    }
    else
       printf("Second largest is %d", a);

    printf("\n");

    return 0;
}
