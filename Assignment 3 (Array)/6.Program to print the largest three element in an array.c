//Program to print the top three largest element in an array
#include<stdio.h>

int main()
{
    int i, j, n;                                                 //declaring variables

    printf("Enter array size:");
    scanf("%d",&n);                                              //taking input of array size
    int a[n];                                                    //declaring array

    printf("Enter array2 elements:");                            //taking input of array elements using for loop
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    printf("\n\nTop three largest element in the array:");

    for(j=0;j<3;j++)                                             //using nested for loop for comparing array elements
    {
      for(i=j+1;i<n;i++)
      {
       if(a[i]>a[j])
       {
         int temp=a[i];                                          //swapping elements when condition is met
         a[i]=a[j];
         a[j]=temp;
       }
      }
      printf(" %d",a[j]);
    }

    printf("\n");

    return 0;
}




