/*Program to show all the integers between
certain input to 0 in decreasing order
using while loop*/

#include<stdio.h>

int main()
{
    int i, n;    //declaring data type of loop iterator and input variable

    printf("Enter the starting integer:");
    scanf("%d", &n);

    //fixing the initial value of i in the loop
    i=n;
    while(i >= 0)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
