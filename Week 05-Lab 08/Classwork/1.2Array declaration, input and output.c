//Array declaration,input and output

#include<stdio.h>

int main()
{
    int a[6];   //declaring array data type,name and size

    //using scanf for taking user input
    scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    //using printf for printing output
    printf("\n\n%d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5]);

    return 0;
}
