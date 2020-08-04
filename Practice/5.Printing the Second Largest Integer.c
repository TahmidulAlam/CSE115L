#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter number:\n");
    scanf("%d", &a);

    printf("Enter number:\n");
    scanf("%d", &b);

    printf("Enter number:\n");
    scanf("%d", &c);

    if(a>b&&a>c)
    {
       if(b>c)
         printf("Second largest is %d", b);
       else
         printf("Second largest is %d", c);
    }
    else if(a<b&&a<c)
    {
       if(b>c)
         printf("Second largest is %d", c);
       else
         printf("Second largest is %d", b);
    }
    else
       printf("Second largest is %d", a);

    return 0;
}
