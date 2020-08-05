#include<stdio.h>

int main()
{
    char c;

    printf("Enter an Letter:\n");
    scanf("%c", &c);

    if(c=='Z'||c=='z')
      printf("There is no next letter in the alphabet");
    else
      {
      c=c+1;
      printf("The next letter in alphabet is %c", c);
      }

   return 0;
}
