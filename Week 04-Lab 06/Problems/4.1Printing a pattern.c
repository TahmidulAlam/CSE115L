//Printing a certain pattern

#include<stdio.h>

int main()
{
    int i, j;

    //using nested for loop for both variables
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
       {
          printf("*");
       }
       printf("\n");
    }

return 0;
}
