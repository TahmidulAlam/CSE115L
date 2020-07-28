//Program to check whether a year is leap year or not

#include<stdio.h>
int main()
{
    int year, i, j, k;
    printf("Enter a year:");
    scanf("%d", &year);

    /*using modulus to find out
      the remainder of year
      when divided by 4,100,400*/
    i=year%4;
    j=year%100;
    k=year%400;

    //using switch case for different condition
    switch(i)
    {
       case 0:
          switch(j)    //using nested switch for condition within a condition
          {
             case 0:
                switch(k)
                {
                   case 0:
                      printf("The year is a leap year");
                   break;
                   default:
                      printf("the year is not a leap year");
                }
             break;
             default:
                printf("The year is leap year");
          }
       break;
       default:
          printf("The year is not a leap year");
    }

return 0;
}
