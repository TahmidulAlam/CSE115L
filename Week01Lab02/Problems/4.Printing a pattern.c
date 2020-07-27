//printing a pattern

#include<stdio.h>
int main()
{   int column;
    int rows=5;
    int i;

    for(i=1; i<=rows; ++i)              //using for loop for multiple rows
    {
      for(column=1; column<=i; ++column)  //using for loop inside for loop for multiple columns
          {
           printf("*\t");
          }
      printf("\n");
    }

    return 0;
}
