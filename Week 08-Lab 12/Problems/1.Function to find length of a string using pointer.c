//Function to find the length of a string

#include<stdio.h>
int length(char *s);                           //declaring function prototype

int main()
{
    char str[1000];                            //declaring character array for string
    printf("Enter characters for string:\n\n");

    gets(str);                                 //getting inputs for string

    int len=length(str);                       //using the function to get result

    printf("\nString length is %d\n",len);     //printing the result

    return 0;
}

int length(char *s)
{
    int len=0;

    for(;*s!='\0';s++)                          //using for loop for finding the length of string
       len=len+1;

    return len;
}
