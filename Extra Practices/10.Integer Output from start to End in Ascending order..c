#include<stdio.h>
void listNumbersAsc(int start, int end);                 //declaring function prototype

int main()
{

    int n1, n2;                                          //declaring integer variables

    printf("Enter the starting number:");
    scanf("%d", &n1);                                    //taking inputs
    printf("Enter the ending number:");
    scanf("%d", &n2);
    printf("\n");

    if(n1>n2)
        printf("Invalid Input");                         //printing invalid input if starting number is greater than end
    else
    {
      printf("The numbers in Ascending order:");
      listNumbersAsc(n1,n2);                             //using the function for printing integers
    }

    printf("\n");

    return 0;
}

void listNumbersAsc(int start, int end)
{
    int i;

    for(i=start;i<=end;i++)
    {
       printf("%d ",i);                                   //using for loop for printing integers
    }
}
