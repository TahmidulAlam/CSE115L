//Declaring and accessing the elements of a two-dimensional array

#include<stdio.h>

int main()
{
    //declaring two-dimensional array and other variables
    double A[20][20];
    int i, j, rows, columns;

    //taking input for rows an columns of array
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &columns);

    //using nested loop for taking repeated inputs
    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
       {
          printf("A[%d][%d]:", i, j);
          scanf("%lf", &A[i][j]);
       }
    }

    printf("values in the array A:\n");
    //using nested loop for printing repeated outputs
    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
       {
           printf("%0.2lf ", A[i][j]);
       }
       printf("\n");
    }

    return 0;
}
