#include<stdio.h>
int sumOfDigits(int x);                  //declaring function prototype

int main()
{
    int n, Sum;                          //declaring integer data type

    printf("Enter a number:");
    scanf("%d", &n);                     //taking inputs
    printf("\n");

    Sum=sumOfDigits(n);                  //using the return type function for calculation

    printf("Sum of digits: %d", Sum);    //printing the result
    printf("\n");

    return 0;
}

//function for calculating the sum of digits
int sumOfDigits(int x)
{
    int sum=0;

    while(x>0)
    {
      sum = sum+(x-(int)(x/10)*10);      //using type casting for isolating the last digit
      x=(int)(x/10);                     //reducing digits from right using divison
    }

    return sum;
}

