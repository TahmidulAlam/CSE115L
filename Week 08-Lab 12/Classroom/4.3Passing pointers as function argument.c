//Program to print a string in reverse order using function and pointer

#include<stdio.h>
void reverse(char *s);         //declaring function prototype

int main()
{
    char str[1000];            //declaring character array for string
    printf("Enter a sentence within 1000 words including space:\n\n");

    gets(str);                 //taking input for string

    printf("\nThe sentence in reverse order:\n\n");
    reverse(str);              //using the function to reverse the string
    puts(str);

    return 0;
}

void reverse(char *s)
{
    int i, len=0;
    char temp;

    for(i=0;*(s+i)!='\0';i++)    //measuring the string length
       len=len+1;

    for(i=0;i<len/2;i++)         //using the half length for swapping
    {
      temp=*(s+i);               //using temporary variable for swapping
      *(s+i)=*(s+len-i-1);
      *(s+len-i-1)=temp;
    }
}

