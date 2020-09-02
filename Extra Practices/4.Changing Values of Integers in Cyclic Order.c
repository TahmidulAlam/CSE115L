#include<stdio.h>

int main()
{
    int a, b, c, i;             //declaring integer data type of variables

    printf("a=");
    scanf("%d", &a);            //taking inputs

    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%d", &c);

    i=a;                        //using temporary variable to store value of a
    a=b;
    b=c;
    c=i;

    printf("After changing the values in cyclic order\n");

    //printing result
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);

    return 0;
}
