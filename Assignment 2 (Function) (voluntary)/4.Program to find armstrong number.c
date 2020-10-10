//Program to find Armstrong number

#include<stdio.h>
#include<math.h>
int numberOfDigits(int N);
int armstrongNumber(int N);

int main()
{
    int n , i, k=0;

    printf("An n-digit number that is the sum of the\n");
    printf("nth powers of its digits is called an Armstrong Number.\n");
    printf("Source: Wolfram\n");

    printf("\nEnter how many first Armstrong number to find:");
    scanf("%d",&n);

    printf("\nFirst %d armstrong numbers: ",n);

    for(i=0;k<n;i++)
    {
       if(armstrongNumber(i)==1)
       {
          printf("%d\n", i);
          k=k+1;
       }
    }

    return 0;
}

int armstrongNumber(int N)
{
    int digit = numberOfDigits(N);
    int n, sum=0;

    n=N;

    while(n>0)
    {
        sum=sum+pow((n-(n/10)*10),digit);
        n=n/10;
    }

    if(sum==N)
      return 1;
    else
      return 0;
}

int numberOfDigits(int N)
{
    int digit=0;

    while(N>0)
    {
       digit=digit+1;
       N=N/10;
    }

    return digit;
}






