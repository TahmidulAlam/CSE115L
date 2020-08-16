//Program to print rectangle of stars

#include<stdio.h>

int main()
{
    int n, k, i, j;                    //declaring variables

    //Taking inputs
    printf("Enter number of rows:");
    scanf("%d", &n);
    printf("Enter number of columns:");
    scanf("%d", &k);

    //Using nested for loop for rows and columns
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=k;j++)
       {
          printf("*");
       }
       printf("\n");
    }

    return 0;
}
