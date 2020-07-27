//writing nested "if else" statement

#include<stdio.h>
int main()
{
    int i,j=12;
    printf("Enter a Number:");
    scanf("%d", &i);

    if(i>0)
    {
      if(i<j)                       //using nested if for condition within condition
      {
        printf("Greater than 0, less than j");
      }
      else if (i>j)
      {
        printf("Greater than j");
      }
      else
      {
        printf("Equals to j");
      }
    }
    else if (i<0)
    {
      printf("Less than 0");
    }
    else
    {
      printf("Equals to 0");
    }

    return 0;
}
