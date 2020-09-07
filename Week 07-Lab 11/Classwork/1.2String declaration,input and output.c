//String declaration,input and output

#include<stdio.h>

int main()
{
    //declaring character array for both strings
    char str1[100];
    char str2[50];

    printf("Enter a sentence within 100 character: ");

    //getting inputs for str1
    gets(str1);

    printf("Enter a sentence within 50 character: ");

    //getting inputs for str2
    scanf("%s",str2);

    //printing both string using puts function and printf
    puts(str1);
    printf(" %s", str2);

    return 0;
}
