//Program to find the largest value using pointers and function

#include<stdio.h>
#include<stdlib.h>
int max(int *p, int size);                           //declaring function prototype for finding largest value

int main()
{
    int i, n, result;                                //declaring integers and pointer array

    printf("Enter array size:");
    scanf("%d",&n);

    int*ptr=(int*)malloc(n*sizeof(int));             //using malloc to allocate the size size for array

    printf("\nEnter array elements:");

    for(int i=0;i<n;i++)                             //taking inputs using for loop
    {
       scanf("%d",ptr+i);
    }

    result=max(ptr,n);                               //getting the result using the function

    printf("\nLargest value is %d\n", result);

    return 0;
}

int max(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
       if(p[i]>p[0])
         p[0]=p[i];
    }

    return  p[0];
}
