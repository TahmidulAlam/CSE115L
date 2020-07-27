/*Writing a program using
nested switch case statement
for condition within a condition*/

#include <stdio.h>
int main ()
{
    int i,j;
    printf("Enter the value of i and j:");
    scanf("%d %d",&i, &j);

    switch(i)
    {
       case 0:
       printf("i equals 0 (outer switch)\n");
          switch(j)                   //using nested switch case for inner condition
          {
             case 0:
                printf("i and j both equals 0 (inner switch)\n");
                break;
             default:
                printf("j is not equal to 0 (inner switch)\n");
          }
       break;
       default:
       printf("i is not equal to 0 (outer switch)\n");
    }

    return 0;
}
