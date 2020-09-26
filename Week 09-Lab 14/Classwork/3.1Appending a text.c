//Program to append a file

#include<stdio.h>

int main()
{
    FILE *fp;                               //Declaring file pointer

    fp=fopen("appending text.txt","a");

    fprintf(fp,"Appending this file");      //printing in file

    fclose(fp);                             //closing the file

    return 0;
}
