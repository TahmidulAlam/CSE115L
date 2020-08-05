//Program to  print 00 to 99 using nested for loop

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0;i<=9;i++)
    {

       for(j=0;j<=9;j++)
        {
          printf("%d%d\n", i ,j);
        }
    }

    return 0;
}
