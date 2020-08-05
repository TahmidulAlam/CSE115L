/*Program to show all the integers between
0 to certain input in increasing order
using while loop*/

#include<stdio.h>

int main()
{
    int i, n;    //declaring data type of loop iterator and input variable

    printf("Enter the last integer:");
    scanf("%d", &n);

    //fixing the initial value of i in the loop
    i=0;
    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
