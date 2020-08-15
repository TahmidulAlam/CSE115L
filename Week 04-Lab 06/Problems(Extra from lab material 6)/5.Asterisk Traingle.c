//Program to print asterisk pyramid

#include<stdio.h>
int main()
{
    int i,n,j;                    //Declaring variables

    printf("Enter a number:");
    scanf("%d", &n);              //Taking inputs
    printf("\n");

    for(i=1;i<=n;i++)             //using nested for loop for pyramid
    {
       for(j=n-i;j>=1;j--)        //loop for printing spaces
       {
           printf(" ");
       }
       for(j=1;j<=2*i-1;j++)      //loop for printing asterisks
       {
           printf("*");
       }
       printf("\n");

    }

    return 0;
}
