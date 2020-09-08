//Program passing string as a function argument

#include<stdio.h>
void printString(char s[]);                       //declaring function prototype

int main()
{
    //declaring character array for string
    char str1[100];

    printf("Enter characters:");

    //getting the string
    gets(str1);

    printf("\n");

    //using the function to print string
    printString(str1);

    printf("\n");

    return 0;
}

//function print the string
void printString(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
}
