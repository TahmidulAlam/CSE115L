/*Program to show the even numbers
between 0 and 100 inclusive using for loop*/

#include<stdio.h>

int main()
{
    int i;                  //declaring data type of iterator
    for(i=0;i<=100;i=i+2)  //using for loop for printing the even numbers
    {
       printf("%d\n", i);
    }

    return 0;
}
