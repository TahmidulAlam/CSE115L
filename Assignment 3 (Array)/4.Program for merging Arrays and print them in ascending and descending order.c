//Program for merging two arrays and print them in ascending and descending order
#include<stdio.h>

int main()
{
    int i, j, n, N, Z;                               //declaring variables

    printf("Enter array1 size:");
    scanf("%d",&n);                                  //taking input of array1 size
    int a[n];                                        //declaring array1

    printf("Enter array1 elements:");
    for(i=0;i<n;i++)                                 //taking input of array1 elements using for loop
    {
       scanf("%d",&a[i]);
    }

    printf("\nEnter array2 size:");
    scanf("%d",&N);                                  //taking input of array2 size
    int A[N];                                        //declaring array2

    printf("Enter array2 elements:");                //taking input of array2 elements using for loop
    for(i=0;i<N;i++)
    {
       scanf("%d",&A[i]);
    }

    Z=n+N;                                           //determining the size of merged array
    int Arr[Z];                                      //declaring merged array
    for(i=0;i<n;i++)                                 //merging both arrays using for loop
    {
       Arr[i]=a[i];
    }
    for(i=0;i<N;i++)
    {
       Arr[n+i]=A[i];
    }

    printf("\nBoth arrays after merge:");
    for(i=0;i<Z;i++)                                 //printing the merged array using for loop
    {
       printf("%d ",Arr[i]);
    }

    printf("\n\nNew array in Descending order:\n");
    for(j=0;j<Z;j++)                                 //using nested for loop for comparing array elements
    {
      for(i=j+1;i<Z;i++)
      {
       if(Arr[i]>Arr[j])
       {
         int temp=Arr[i];                            //swapping elements when condition is met
         Arr[i]=Arr[j];
         Arr[j]=temp;
       }
      }
    }
    for(i=0;i<Z;i++)                                 //printing the merged array in descending order
    {
      printf("%d ",Arr[i]);
    }

    printf("\n\nNew array in Ascending order:\n");
    for(j=0;j<Z;j++)                                 //using nested for loop for comparing array elements
    {
      for(i=j+1;i<Z;i++)
      {
         if(Arr[i]<Arr[j])                           //swapping array elements when condition is met
         {
           int temp=Arr[i];
           Arr[i]=Arr[j];
           Arr[j]=temp;
         }
      }
    }
    for(i=0;i<Z;i++)                                 //printing the array in ascending order
    {
      printf("%d ",Arr[i]);
    }

    printf("\n");

    return 0;
}




