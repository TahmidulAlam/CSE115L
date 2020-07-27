/*using switch case statement
for printing the character user typed*/

#include<stdio.h>
int main()
{
    //declaring data type for character variable in switch case
    char choice;
    printf("Enter a character:");
    scanf("%c", &choice);

    switch(choice)
    {
       case'A':
         printf("You typed A");
         break;
       case 'B':
         printf("You typed B");
         break;
       case 'C':
         printf("You typed C");
         break;
       case 'D':
         printf("You typed D");
         break;
       case 'E':
         printf("You typed E");
         break;
       case 'F':
         printf("You typed F");
         break;
       case 'a':
         printf("You typed a");
         break;
       case 'b':
         printf("You typed b");
         break;
       case 'c':
         printf("You typed c");
         break;
       case 'd':
         printf("You typed d");
         break;
       case 'e':
         printf("You typed e");
         break;
       case 'f':
         printf("You typed f");
         break;
       default:
         printf("You typed something else");
    }

    return 0;
}
