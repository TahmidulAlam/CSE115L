/*Program to take 5 integers as input and
prints the highest number in the array*/

#include<stdio.h>

int main()
{
    int a[5], i;                   //Declaring array and integer variable

    printf("Enter array elements:");

    for(i=0;i<5;i++)               //taking input of 5 integers using for loop
    {
       scanf("%d", &a[i]);
    }

    for(i=0;i<=4;i++)              //printing the integers in reverse order
    {
       if(a[0]<a[i])               //putting the highest value in a[0]
          a[0]=a[i];
    }

    printf("Largest element:%d", a[0]);

    return 0;
}
