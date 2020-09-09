//Program to find duplicate in an array and printing their index and the number themselves

#include<stdio.h>

int main()
{
    int i, j, k, n;                           //declaring variables

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n],A[n];                            //declaring array

    printf("Enter array elements:");

    for(i=0;i<n;i++)                          //taking input using for loop and making a copy of array for later use
    {
       scanf("%d", &a[i]);
       A[i]=a[i];
    }

    for(j=0;j<n;j++)                          //using nested for loop for finding duplicates
    {
       for(i=j+1;i<n;i++)
       {
          if(a[j]==A[i])
          {
            printf("\nduplicate number:%d\n",a[j]);
            printf("Index:");
            for(k=0;k<n;k++)                  //using another for loop inside if statement for finding index
            {
               if(a[j]==A[k])
               {
                 printf(" %d",k);
                 A[k]='NULL';                 //making the values null after match found so that they don't repeat
               }
            }
            printf("\n");
          }
       }
    }

    return 0;
}

