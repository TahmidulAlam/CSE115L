//Program to replace certain element of an array
#include<stdio.h>

int main()
{
    int i, n, index, num;                            //declaring variables

    printf("Enter array size:");
    scanf("%d",&n);                                  //taking input of array size
    int a[n];                                        //declaring array

    printf("Enter array elements:");
    for(i=0;i<n;i++)                                 //taking input of array elements using for loop
    {
       scanf("%d",&a[i]);
    }

    printf("\nEnter index of the element to replace:");
    scanf("%d",&index);

    if(index>0&&index<n)
    {
      printf("Enter new variable:");
      scanf("%d",&num);

      a[index]=num;

      printf("\nArray after replacing element:");
      for(i=0;i<n;i++)                                 //Printing the array after replacing element
      {
         printf("%d ",a[i]);
      }
    }
    else
      printf("Invalid index input,out of range");

    printf("\n");

    return 0;
}




