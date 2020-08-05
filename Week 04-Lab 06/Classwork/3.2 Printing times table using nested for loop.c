//Program to  printing times table using nested for loop

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0;i<=10;i++)
    {

       for(j=0;j<=10;j++)
        {
          printf("%d*%d=%d\n", i ,j, i*j);
        }
        printf("\n");
    }

    return 0;
}
