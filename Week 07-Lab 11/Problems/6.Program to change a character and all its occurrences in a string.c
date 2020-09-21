//Program to change a character and all its occurrences in a string

#include<stdio.h>
void Replace(char arr[],char oldChar,char newChar);        //Declaring function prototype

int main()
{
    char str[1000], ch1, ch2;                              //Declaring character array for string

    //taking string inputs
    printf("Enter string: ");
    gets(str);
    printf("Enter old char: ");
    scanf("%c", &ch1);
    fflush(stdin);                                         //so that is does not take enter as input
    printf("Enter new char: ");
    scanf("%c", &ch2);

    printf("Modified string: ");
    Replace(str, ch1, ch2);                                //using the function to get result

    return 0;
}

void Replace(char arr[],char oldChar, char newChar)
{
     for(int i=0;arr[i]!='\0';i++)                          //running the while loop till it reaches null
     {
        if(arr[i]==oldChar)                                 //using if to replace the old character with new
        {
          arr[i]=newChar;
        }
     }

     puts(arr);
}












