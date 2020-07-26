//Printing a chart using for loop and \t


#include<stdio.h>
int main()
{
    int a=5;
    int i;
    printf("NUMBER\tSQUARE\tCUBE\n");

    for(i=1; i<= a; i++)            //using for loop for printing various lines
    {
     printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    return 0;
}
