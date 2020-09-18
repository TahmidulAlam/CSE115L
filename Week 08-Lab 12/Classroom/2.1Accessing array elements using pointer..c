//Accessing array elements using pointers

#include<stdio.h>

int main()
{
    int i, n;                                 //declaring variables

    printf("Enter array size:");
    scanf("%d",&n);                           //taking inputs of array size

    int a[n];                                 //declaring array
    int *ptr=a;                               //initializing pointer variable to array


    printf("Enter array elements:");

    for(i=0;i<n;i++)                          //taking array elements input using for loop
    {
       scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)                          //printing the array elements using pointer
    {
       printf("\nptr[%d]=%d\n",i,*(ptr+i));
    }

    return 0;
}
