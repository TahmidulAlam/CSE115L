//Program that finds number of vowels an consonant in string

#include<stdio.h>
void count(char arr[]);               //Declaring function prototype

int main()
{
    char str[1000];                   //Declaring character array string

    printf("Enter string:");
    gets(str);                        //taking string input

    count(str);                       //using the void function

    return 0;
}

void count(char arr[])
{
    int i, vowel=0, consonant=0;

    for(i=0;arr[i]!='\0';i++)
    {
       if((arr[i]>=97&&arr[i]<=122)||(arr[i]>=65&&arr[i]<=90))             //first checking if it is an alphabet using ASCII value
       {
         //checking if it is a vowel
         if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
           vowel=vowel+1;
         else if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
           vowel=vowel+1;
         else
          consonant=consonant+1;
       }
    }
    printf("Vowels: %d\n",vowel);
    printf("Consonants: %d\n\n",consonant);
}
