//Program to find out the sum of a square series

#include<stdio.h>
int main()
{
    int a, i;                       //Declaring variables
    printf("Enter a number:");
    scanf("%d", &a);                //taking variable input
    int sum=a*a;


    for(i=1;i<a;i++)
    {
        if(i%2==1)                  //using modulas to determine when to add or substract
        {
          sum=sum-(a-i)*(a-i);

        }
        else
        {
          sum=sum+(a-i)*(a-i);

        }
    }
    printf("The sum is:%d\n\n", sum);   //Printing the sum

    return 0;
}
