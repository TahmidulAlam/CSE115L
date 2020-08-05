/*Writing program using for loop to print
0 to certain input in increasing order*/

#include<stdio.h>

int main()
{
    int i, n;   //declaring data type of the iterator and input variable

    printf("Enter the last integer:");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
      printf("%d\n",i);
    }

    return 0;
}
