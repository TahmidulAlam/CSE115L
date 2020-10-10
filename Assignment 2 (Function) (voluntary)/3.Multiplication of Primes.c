//Program for multiplication of primes

#include<stdio.h>
int primeFinder(int n);

int main()
{
    int i, n, m, k=0, mult=1;

    scanf("%d %d", &n, &m);

    for(i=2;k<n&&i<=m;i++)
    {
       if(primeFinder(i)==1)
       {
         mult=mult*i;
         k=k+1;
       }
    }

    printf("%d",mult);

    return 0;
}

int primeFinder(int n)
{
    int i, flag=1;
    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
         flag=0;
         break;
       }
    }

    return flag;
}
