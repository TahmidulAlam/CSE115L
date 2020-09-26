//Program to print characters from a file

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;                                //Declaring pointer for file
    char c;                                  //character for taking file inputs

    fp=fopen("testing file.txt","r");        //Opening the file


    /*Using while loop to print
      the characters in file
      till it reaches end of file*/

    while((c=getc(fp))!=EOF)
    {
         putchar(c);
    }

    printf("\n");

    fclose(fp);                               //closing the file

    return 0;
}
