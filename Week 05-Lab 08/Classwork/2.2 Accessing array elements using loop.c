//Accessing array elements using loop

#include<stdio.h>

int main()
{
    int n, i, sum=0;

    printf("Enter how many numbers to add:");
    scanf("%d", &n);

    int a[n];               //declaring array data type,name and size

    for(i=0;i<n;i++)        //using for loop for summation and repeated input
    {
       scanf("%d", &a[i]);
       sum=sum+a[i];
    }

    printf("Sum=%d", sum);

    return 0;
}
