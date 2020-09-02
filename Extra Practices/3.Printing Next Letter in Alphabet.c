#include<stdio.h>

int main()
{
    char c;                         //declaring character variable

    printf("Enter an Letter:\n");
    scanf("%c", &c);                //taking inputs

    //using if else statment for z input
    if(c=='Z'||c=='z')
      printf("There is no next letter in the alphabet");
    else
      {
      c=c+1;
      printf("The next letter in alphabet is %c", c);    //printing result
      }

   return 0;
}
