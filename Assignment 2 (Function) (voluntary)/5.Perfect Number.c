//Program to first n perfect number in number line

#include<stdio.h>
void perfectNumbers(int n);                                                      //declaring function prototype

int main()
{
    printf("Perfect number: a positive integer that is equal to the sum of\n");  //definition with source
    printf("its positive divisors, excluding the number itself.\n");
    printf("Source: Wikipedia\n\n");

    int N;
    printf("Enter how many first perfect numbers to find: ");
    scanf("%d",&N);                                                              //taking input

    printf("Perfect numbers: ");
    perfectNumbers(N);                                                           //calling the function by value to print perfect numbers
    printf("\n");

    return 0;
}

void perfectNumbers(int n)
{
    int i, j, k=0, sum;                                                           //declaring variables

    for(i=2;k<n;i++)                                                              //for loop keeps running till n perfect numbers are found
    {
       sum=0;
       for(j=1;j<i;j++)                                                           //checking every number less than i
       {
          if(i%j==0)                                                              //if they are divisor they are getting summed up
          {
            sum=sum+j;
          }
       }
       if(sum==i)
       {
         k=k+1;                                                                   //every time a perfect number is found value of K increases
         printf("%d ",i);
       }
    }
}
