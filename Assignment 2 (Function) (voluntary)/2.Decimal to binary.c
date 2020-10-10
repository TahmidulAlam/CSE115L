//program for binary to decimal

#include<stdio.h>
#include<math.h>

int binary(int n);

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",binary(n));

    return 0;
}

int binary(int n)
{
    int result=0, i, k=0;

    while(n>0)
    {
        i=n%2;
        result=result+i*pow(10,k);
        k=k+1;
        n=n/2;
    }

    return result;
}
