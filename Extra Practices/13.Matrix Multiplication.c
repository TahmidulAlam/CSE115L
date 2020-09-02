#include<stdio.h>
int main()
{
    int rowsA,columnA,rowsB,columnB,i,j,k;                        //declaring variables

    printf("Enter first matrix rows:");
    scanf("%d",&rowsA);                                           //taking inputs
    printf("Enter first matrix column:");
    scanf("%d",&columnA);
    printf("\n");
    printf("Enter 2nd matrix rows:");
    scanf("%d",&rowsB);
    printf("Enter 2nd matrix columns:");
    scanf("%d",&columnB);
    printf("\n");

    int A[rowsA][columnA],B[rowsB][columnB],C[rowsA][columnB];

    //using if else for printing invalid input if multiplication is not possible
    if(columnA!=rowsB)
      printf("\nInvalid Input,cannot multiply if column A is not equal to rows B");

    else
    {
      printf("Enter matrix A input:\n");

      //taking matrixA input using nested for loop
      for(i=0;i<rowsA;i++)
      {
       for(j=0;j<columnA;j++)
       {
          scanf("%d", &A[i][j]);
       }
      }

      printf("\nEnter matrix B input:\n");

      //taking matrixB input using nested for loop
      for(i=0;i<rowsB;i++)
      {
       for(j=0;j<columnB;j++)
       {
          scanf("%d", &B[i][j]);
       }
      }

      //using triple nested for loop for multiplication
      for(i=0;i<rowsA;i++)
      {
       for(j=0;j<columnB;j++)
       {
          C[i][j]=0;
          //using k for the multiplication and adding of a columnA and rowB
          for(k=0;k<rowsB;k++)
          {
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
      }

      printf("\nResult [A*B]:\n");

      //printing the resylt using double nested for loop
      for(i=0;i<rowsA;i++)
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
