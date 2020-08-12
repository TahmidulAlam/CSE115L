//Array declaration,input and output

#include<stdio.h>

int main()
{
    double a[3];      //declaring array data type,name and size

    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);         //user putting the variables in array through scanf
    printf("\n\n%.4lf\n%.4lf\n\%.4lf", a[0],  a[1], a[2]);   //printing the input variables

    return 0;
}
