//Program for printing summation of two matrices

#include<stdio.h>
int main()
{
    int rowsA,columnA,rowsB,columnB,i,j;                                              //declaring variables

    printf("Enter first matrix rows:");
    scanf("%d",&rowsA);                                                               //taking inputs
    printf("Enter first matrix column:");
    scanf("%d",&columnA);
    printf("\n");
    printf("Enter 2nd matrix rows:");
    scanf("%d",&rowsB);
    printf("Enter 2nd matrix columns:");
    scanf("%d",&columnB);
    printf("\n");

    int A[rowsA][columnA],B[rowsB][columnB],C[rowsA][columnB];                         //declaring 2D arrays for metrices

    if(rowsA!=rowsB||columnA!=columnB)                                                 //using if else for printing invalid input if summation is not possible
      printf("\nDimension error,cannot add if both metrices dimension is not equal");

    else
    {
      printf("Enter matrix A input:\n");


      for(i=0;i<rowsA;i++)                                                              //taking first matrix input using nested for loop
      {
       for(j=0;j<columnA;j++)
       {
          scanf("%d", &A[i][j]);
       }
      }

      printf("\nEnter matrix B input:\n");

      for(i=0;i<rowsB;i++)                                                              //taking matrixB input using nested for loop
      {
       for(j=0;j<columnB;j++)
       {
          scanf("%d", &B[i][j]);
       }
      }

      for(i=0;i<rowsA;i++)                                                              //using nested for loop for adding
      {
       for(j=0;j<columnB;j++)
       {
          C[i][j]=A[i][j]+B[i][j];
       }
      }

      printf("\nResult [A+B]:\n");

      for(i=0;i<rowsA;i++)                                                               //printing the result using double nested for loop
      {
       for(j=0;j<columnB;j++)
       {
          printf("%10d ",C[i][j]);
       }
       printf("\n");
      }
    }

    return 0;
}
