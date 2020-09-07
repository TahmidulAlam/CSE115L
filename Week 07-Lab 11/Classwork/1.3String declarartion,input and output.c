//string declaration,input and output

#include<stdio.h>

int main()
{
    //declaring character array for string
    char str[20];
    int i;

    printf("Enter 20 characters: ");

    //using for loop for taking inputs of string
    for(i=1;i<=20;i++)
    {
       scanf("%c",&str[i]);
    }

    printf("\n");

    //printing the string using for loop
    for(i=1;i<=20;i++)
    {
       printf("%c",str[i]);
    }

    return 0;
}
