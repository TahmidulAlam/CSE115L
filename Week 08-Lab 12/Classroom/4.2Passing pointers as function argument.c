//Program to print a string using function and pointers

#include<stdio.h>
void print(char *s);                  //declaring function prototype

int main()
{
    char str[1000];                   //declaring character array for string

    printf("Enter a sentence within 1000 words including space:\n\n");
    gets(str);                        //getting the string

    printf("\n");
    print(str);                       //printing the string using void function
    printf("\n");

    return 0;
}

void print(char *s)
{
     for(;*s!='\0';s++)                //using for loop to print
     {
         printf("%c",*s);              //using pointers to print the characters in string
     }
}
