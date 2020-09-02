#include<stdio.h>
void listNumbersDesc(int start, int end);                //declaring function prototype


int main()
{
    int n1, n2;                                          //declaring integer data type of variables

    printf("Enter the starting number:");
    scanf("%d", &n1);                                    //taking inputs
    printf("Enter the ending number:");
    scanf("%d", &n2);

    //using if else inputs if starting number is less than ending number to print invalid input
    if(n1<n2)
      printf("Invalid Input");
    else
    {
      printf("The numbers in descending order:");
      listNumbersDesc(n1,n2);                             //using function for printing outputs
    }

   return 0;
}

//function for printing outputs
void listNumbersDesc(int start, int end)
{
    int i;

    for(i=start;i>=end;i--)                               //using for loop for printing integers
    {
       printf("%d ",i);
    }
}
