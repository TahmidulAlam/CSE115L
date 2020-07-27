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
      case 0:
        printf("You typed 0");
        break;
      case 1:
        printf("You typed 1");
        break;
      case 2:
        printf("You typed 2");
        break;
      case 3:
        printf("You typed 3");
        break;
      case 4:
        printf("You typed 4");
        break;
      case 5:
        printf("You typed 5");
        break;
      case 6:
        printf("You typed 6");
        break;
      case 7:
        printf("You typed 7");
        break;
      case 8:
        printf("You typed 8");
        break;
      case 9:
        printf("You typed 9");
        break;
      default:
        printf("You typed something else");
        break;
    }

    return 0;


}
