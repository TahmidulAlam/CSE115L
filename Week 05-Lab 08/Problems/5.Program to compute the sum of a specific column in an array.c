//Program that calculates the sum of a specific column in array

#include<stdio.h>

int main()
{
    int rows, columns, i, j, sum=0, n, k;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("Enter number of columns:");
    scanf("%d", &columns);

    int A[i][j];

    printf("Enter elements:");

    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
       {
          scanf("%d", &A[i][j]);
       }
    }

    printf("%d %d %d",A[0][0],A[0][1],A[0][2]);

    printf("Enter which column to find sum of:");
    scanf("%d", &n);

    for(k=0;k<rows;k++)
    {
       sum=sum+A[k][n-1];
       printf("%d\n", A[k][n-1]);
    }

    printf("Sum of column %d: %d", n, sum);

    return 0;
}
