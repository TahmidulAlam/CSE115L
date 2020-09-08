//Program to find the length of a string

#include<stdio.h>
int length(char arr[]);                  //declaring function prototype

int main()
{
    //declaring character array for string
    char str[1000];
    int result;

    printf("Enter string:");
    //getting string
    gets(str);

    //using the function to get result
    result=length(str);

    //printing the result
    printf("Length is:%d",result);
    printf("\n");

    return 0;
}

//function to find the length of string
int length(char arr[])
{
    int i=0;

    //using while loop to find when the string ends
    while(arr[i]!='\0')
    {
        i++;
    }

    //returning the value to main function
    return i;

}

