//Program to print star pyramid using function

#include<stdio.h>
void printStarPyramid(int lines);                 //declaring function prototype

int main()
{
    int n;                                        //Declaring variables of main function

    printf("Enter number of lines:");
    scanf("%d", &n);                              //Taking inputs

    printf("\n");

    printStarPyramid(n);                          //using the void function to print pyramids

    printf("\n");

    return 0;
}

//The function to print star pyramid
void printStarPyramid(int lines)
{
    int i, j;                                     //Declaring function variables

    //using nested for loop for rows and columns
    for(i=1;i<=lines;i++)
    {
       for(j=1;j<=(lines-i);j++)
       {
          printf(" ");
       }
       for(j=1;j<=(2*i-1);j++)
       {
          printf("*");
       }
       printf("\n");
    }
}
