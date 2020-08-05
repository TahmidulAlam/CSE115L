/*Program to show all the integers between
0 to certain input in increasing order
using do while loop*/

#include<stdio.h>

int main()
{
    int i, n;    //declaring data type of loop iterator and input variable

    printf("Enter the last integer:");
    scanf("%d", &n);

    //fixing the initial value of i in the loop
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= n);

    return 0;
}
