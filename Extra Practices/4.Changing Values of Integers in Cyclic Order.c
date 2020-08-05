#include<stdio.h>

int main()
{
    int a, b, c, i;

    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%d", &c);

    i=a;
    a=b;
    b=c;
    c=i;

    printf("After changing the values in cyclic order\n");

    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);

    return 0;
}
