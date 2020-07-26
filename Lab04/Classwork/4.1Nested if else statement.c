//writing nested "if else" statement

#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);

    if(i>0)
    {
      if(i<10)       //using nested :"if else statement for condition within a condition
      {
        printf("Greater than 0, less than 10");
      }
      else if(i>10)
      {
        printf("Greater than 10");
      }
      else
      {
       printf("Equals to 10");
      }
    }

   return 0;
}
