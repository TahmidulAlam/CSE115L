//Accessing array elements using loop

#include<stdio.h>

int main()
{
    int i, n;                           //declaring input integer and array
    printf("Enter length of array:");
    scanf("%d", &n);

    int a[n];

    for(int i=0;i<n;i++)                //using for loop for taking several inputs
    {
       scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++)                //using printf for printing several outputs
    {
       printf("%d", a[i]);
    }

    return 0;
}
