/* program using "switch case" statement
for finding a number user typed*/

#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a number:");
    scanf("%d", &choice);     //using integer data type variable for switch case

    switch(choice)
    {
      case 0:        //using both cases for same output
      case 1:
        printf("You typed 0 or 1");
        break;
      case 2:
      case 3:
        printf("You typed 2 or 3");
        break;
      case 4:
      case 5:
        printf("You typed 4 or 5");
        break;
      case 6:
      case 7:
        printf("You typed 6 or 7");
        break;
      case 8:
      case 9:
        printf("You typed 8 or 9");
        break;
      default:
        printf("You typed something else");
        break;
    }

    return 0;
}
