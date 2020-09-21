//Program that reverses a string without using built in function

#include<stdio.h>
void reverse(char arr[]);              //Declaring function prototype

int main()
{
    char str[1000];                    //declaring character array for string

    printf("Enter string: ");
    gets(str);                         //taking string input

    reverse(str);                      //using function to reverse the string

    return 0;
}

void reverse(char arr[])
{
    int i, len=0;
    char temp;

    //Measuring the length of string
    for(i=0;arr[i]!='\0';i++)
    {
       len=len+1;
    }

    //swapping the characters using temporaary variables
    for(i=0;i<len/2;i++)
    {
       temp=arr[i];
       arr[i]=arr[len-i-1];
       arr[len-i-1]=temp;
    }

    printf("Reverse order: ");
    puts(arr);
}
