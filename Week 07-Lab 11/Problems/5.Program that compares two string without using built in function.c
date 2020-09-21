//Program to compare two strings without using library functions

#include<stdio.h>
int compare(char str1[], char str2[]);      //Declaring function prototype

int main()
{
    char string1[1000], string2[1000];      //Declaring character array for string

    //taking string inputs
    printf("Enter str1: ");
    gets(string1);
    printf("Enter str2: ");
    gets(string2);

    int result=compare(string1,string2);     //using the function to get result

    printf("%d",result);

    return 0;
}

int compare(char str1[], char str2[])
{
    int i=0, flag=0;

    while(str1[i]!='\0'||str2[i]!='\0')       //using this condition so that the loop stops when both string are null
    {
        if(str1[i]>str2[i])                   //comparing the string using if else
        {
          flag=1;
          break;
        }
        else if(str1[i]<str2[i])
        {
          flag=-1;
          break;
        }
        else
        {
          flag=0;
        }

        i++;
    }

    return flag;                               //returning the flag value
}

