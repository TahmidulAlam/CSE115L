//Program to print inverted hollow right triangle

#include<stdio.h>
int main()
{
    int n, i, j;                     //Declaring variables

    printf("Enter number of rows:");
    scanf("%d", &n);                 //Taking innputs

    //Usinf nested for loop for row and columns
    for(i=1;i<=n;i++)
    {
       for(j=0;j<=n-i;j++)
       {
          //Using if else to determine when to print star or space for creating hollow
          if(i==1||j==0||j==n-i)
            printf("*");
          else
            printf(" ");
       }
       printf("\n");
    }
     return 0;
}
