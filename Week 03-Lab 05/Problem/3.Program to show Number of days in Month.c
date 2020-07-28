//Program to show the number of days a month has.

#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter Month Number:");
    scanf("%d", &i);

    switch(i)
    {
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
       printf("Number of days= 31");
       break;
       case 2:
       printf("Is it leap year\n(If 'yes' press '1',if 'no' press '0'):");
       scanf("%d", &j);
          switch(j)
          {
             case 0:
             printf("Number of Days= 28");
             break;
             case 1:
             printf("Number of days= 29");
             break;
             default:
             printf("Invalid Number");
          }
       break;
       case 4:
       case 6:
       case 9:
       case 11:
       printf("Number of days= 30");
       default:
       printf("Invalid number");
    }

return 0;
}
