//program using continue statement in for loop

#include<stdio.h>
int main()
{
    int i,n;                  //declaring integer data type of the iterator and input variable

    printf("Enter a number:");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        if(i==6)           //causing the loop to skip the print of i=6
        continue;
        printf("%d\n",i);
    }

return 0;
}
