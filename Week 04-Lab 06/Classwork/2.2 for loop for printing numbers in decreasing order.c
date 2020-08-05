/*Writing program using for loop to print
certain input to 0 in decreasing order*/

#include<stdio.h>

int main()
{
    int i, n;        //declaring data type of the iterator and input variable

    printf("Enter the starting integer:");
    scanf("%d", &n);

    for(i=n;i>=0;i--)
    {
      printf("%d\n",i);
    }

    return 0;
}
