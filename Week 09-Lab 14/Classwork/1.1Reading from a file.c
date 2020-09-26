//Program to open a file using file pointer

#include<stdio.h>

int main()
{
    FILE *fp;                            //declaring a file pointer

    fp=fopen("Testing file.txt","r");

    if(fp=NULL)                          //It will print NULL if no file is found
      printf("File not found");
    else
    {
      printf("\nFile has been opened\n");
      fclose(fp);                       //Closing the file
    }

    return 0;
}
