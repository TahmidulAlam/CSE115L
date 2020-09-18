/*Using pointer and while loop to print a string's
first character and the rest of the alphabets serially*/

#include<stdio.h>

int main()
{
    char str[1000];                   //Declaring character array for string
    char *chptr;                      //declaring character pointer for string

    chptr=str;                        //Initializing pointer with string

    printf("Enter characters:");
    gets(str);                        //getting characters for string
    printf("\n");

    int i=0;

    /*printing the string's first alphabet
      and the rest alphabets serially using
      pointer and while loop*/

    while(str[i]!='\0')
    {
        printf("%c",*chptr+i);
        i++;
    }

    printf("\n");

    return 0;
}
