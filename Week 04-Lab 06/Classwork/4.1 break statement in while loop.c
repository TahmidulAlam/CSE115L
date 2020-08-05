//program using break statement in while loop

#include<stdio.h>
int main()
{
    int i,n;                  //declaring integer data type of the iterator

    printf("Enter a number:");
    scanf("%d", &n);

    i = 0;
    while (i <= n)
    {
        printf("%d\n",i);
        //the following statement will cause the while loop to break at i=8
        if (i == 8)
        break;
        ++i;
    }

return 0;
}
