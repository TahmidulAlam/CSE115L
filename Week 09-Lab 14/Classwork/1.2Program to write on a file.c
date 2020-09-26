//Program to write characters in a file

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;                                  //Declaring pointer for file

    char str[50];                              //declaring character array for string

    printf("Enter a sentence: ");
    gets(str);                                 //getting inputs in string

    fp=fopen("testing file.txt","w");

    fprintf(fp,str);                           //Printing the string in file

    fclose(fp);                                //closing the file

    printf("\nThe sentence has been written on test.txt\n");

    return 0;
}
