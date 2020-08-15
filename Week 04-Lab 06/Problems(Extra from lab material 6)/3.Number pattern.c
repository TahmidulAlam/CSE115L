//Printing a certain number pattern

#include<stdio.h>
int main()
{
    int i, j, n;                   //Declaring integer variables

    printf("Enter a number:");
    scanf("%d", &n);               //Taking inputs
    printf("\n\n");

    for(i=1;i<=n;i++)
    {
       if(i%2==1)                  //Using if else statment and modulas to differentiate between odd and even
         for(j=1;j<=(i+1)/2;j++)
         {
             printf("%d", 2*j-1);
             printf(" ");
         }
       else
         for(j=1;j<=i/2;j++)
         {
             printf("%d", 2*j);
             printf(" ");
         }
       printf("\n");
    }

    return 0;
}




