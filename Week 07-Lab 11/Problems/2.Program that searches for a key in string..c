//Program that searches for a character in a string using function

#include<stdio.h>
void search(char arr[], char key);        //declaring function prototype

int main()
{
    char ch, str[1000];                   //declaring character array for string and character variable

    printf("Enter string:");
    gets(str);                            //getting string

    printf("Enter character:");
    scanf("%c",&ch);                      //taking character input

    search(str,ch);

    return 0;
}

void search(char arr[] , char key)
{
    int i, flag=0;

    while(arr[i]!='\0')                     //using while loop so that it keeps running till reaches null in string
    {
         if(arr[i]==key)
         {
            flag=1;
            break;
         }
         i++;
    }

    if(flag==1)
      printf("Found");
    else
      printf("Not found");
}






