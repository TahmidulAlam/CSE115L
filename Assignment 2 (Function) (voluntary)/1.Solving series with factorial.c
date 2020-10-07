//Program for calculating series containing factorial

#include<stdio.h>
float series(int n);                                       //Declaring function prototype

int main()
{
    int N;                                                 //declaring variables
    float result;

    printf("Enter value of n: ");
    scanf("%d",&N);                                        //taking input of N

    if(N%2==0||N<0)                                        //N have to be odd and positive
      printf("Enter an positive odd number");
    else
    {
      result=series(N);                                    //calling the function
      printf("\nResult= %f\n", result);                    //printing the result
    }
    return 0;
}

float series(int n)
{
    int i, j;
    float fact,sum=1;

    for(i=1;i<=(n+1)/2;i++)                                //using for loop to count till (n+1)/2
    {
       fact=1;
       for(j=2;j<=(2*i-1);j++)                              //using another loop for factorial
       {
          fact=fact*j;
       }
       sum=sum+(2*i-1)/fact;
    }

    return sum;
}
