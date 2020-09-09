//Program to find transpose of a matrix

#include<stdio.h>
int main()
{
    int rowsA, columnA, rowsB, columnB, i, j;                                //declaring variables

    printf("Enter matrix rows:");                                            //taking input of both matrix's dimension
    scanf("%d",&rowsA);
    printf("Enter matrix column:");
    scanf("%d",&columnA);
    printf("\n");

    rowsB=columnA;                                                           //Declaring rows and columns of transpose matrix
    columnB=rowsA;

    int A[rowsA][columnA],B[rowsB][columnB];                                 //Declaring arrays for both matrices

    printf("Enter matrixA input:\n");

    for(i=0;i<rowsA;i++)                                                     //taking matrixA input using nested for loop
    {
      for(j=0;j<columnA;j++)
      {
          scanf("%d", &A[i][j]);
      }
    }

    for(i=0;i<rowsB;i++)                                                     //making transpose of matrixA in B array input using nested for loop
    {
      for(j=0;j<columnB;j++)
      {
          B[i][j]=A[j][i];
      }
    }

    printf("\nResult Transpose of matrixA:\n");

    for(i=0;i<rowsB;i++)                                                    //printing the result using double nested for loop
    {
     for(j=0;j<columnB;j++)
     {
        printf("%d ",B[i][j]);
     }
     printf("\n");
    }

    printf("\n");

    return 0;
}
