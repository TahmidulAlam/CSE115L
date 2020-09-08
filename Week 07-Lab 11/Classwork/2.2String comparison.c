//Program for string comparison

#include<stdio.h>
#include<string.h>                 //including header file for using built-in string functions

int main()
{
    //declaring character array for string
    char str1[10];
    char str2[10];

    int result;

    //getting both strings
    printf("Enter characters for string1:");
    gets(str1);
    printf("Enter characters for string2:");
    gets(str2);

    //getting result by comparing both strings
    result=strcmp(str1,str2);

    //printing the result
    printf("\nresult=%d\n",result);

    if(result==0)
      printf("Both strings are same.");
    else if(result>0)
      printf("string1 is bigger.");
    else
      printf("string2 is bigger.");

    printf("\n");

    return 0;
}
