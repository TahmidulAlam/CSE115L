/*Program to take 5 integers as input and
print them in reverse order*/

#include<stdio.h>

int main()
{
    int a[5], i;            //Declaring array and integer variable

    printf("Enter array elements:");

    for(i=0;i<5;i++)        //taking input of 5 integers using for loop
    {
       scanf("%d", &a[i]);
    }

    printf("Reversed order:");

    for(i=4;i>=0;i--)       //printing the integers in reverse order
    {
       printf("%d ", a[i]);
    }

    return 0;
}
