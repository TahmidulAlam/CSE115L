//Printing string using pointer and puts

#include <stdio.h>

int main ()
{
    char str[1000];                                 //Declaring string size
    char *chptr;                                   //declaring character pointer

    chptr=str;                                     //initializing character pointer with string
    printf("Enter characters to print: ");

    gets(chptr);                                   //getting inputs in string using pointer

    printf("\n");
    puts(chptr);                                   //printing the characters using pointer
    printf("\n");
    puts(str);                                     //printing the characters using string

    return 0;
}
