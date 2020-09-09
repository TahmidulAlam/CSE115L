//program to copy elements of an array in reverse order in another array and print them both

#include<stdio.h>
int main()
{
    int i, n;

    printf("Enter size of array:");
    scanf("%d",&n);                          //taking inputs of array size

    int a[n];                                //declaring both arrays
    int reverse_a[n];

    printf("Enter array elements:");

    for(i=0;i<n;i++)                         //taking inputs of the first array
    {
       scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)                         //copying the array elements in reverse orer in another array
    {
       reverse_a[i]=a[n-i-1];
    }

    printf("\na[%d]=",n);

    for(i=0;i<n;i++)                         //printing the first array using for loop
    {
       printf("%d ",a[i]);
    }

    printf("\nreverse_a[%d]=",n);

    for(i=0;i<n;i++)                         //printing the reverse order array using for loop
    {
       printf("%d ",reverse_a[i]);
    }

    printf("\n");

    return 0;
}

