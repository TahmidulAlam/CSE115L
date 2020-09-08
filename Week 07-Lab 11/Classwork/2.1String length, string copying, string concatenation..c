//program to find string length,string copying and concatenation

#include<stdio.h>
#include<string.h>         //including header files for using built in string functions

int main()
{
    //declaring character arrays for string
    char str1[20];
    char str2[20];
    char str3[20];

    int len;              //integer variable for storing string length

    //getting both string
    printf("Enter a sentence within 20 character:");
    gets(str1);
    printf("Enter a sentence within 20 character:");
    gets(str2);

    //copying string 1 into string 3
    strcpy(str3,str1);
    printf("\nstrcpy(str3,str1)=%s\n\n",str3);

    //concatenating string 1 and string 2
    strcat(str1,str2);
    printf("strcat(str1,str2)=%s\n\n",str1);

    //getting length of string 1
    len=strlen(str1);
    printf("strlen(str1)=%d\n",len);

    return 0;
}
