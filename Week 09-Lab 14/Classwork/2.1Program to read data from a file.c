//Program to read data from a file

#include<stdio.h>

typedef struct student                    //declaring a data type name struct student for keeping student data
{
    char name[50];
    int number;
}S;

int main()
{
    S A[5];                               //Declaring an array of the data type S
    FILE *fp;                             //declaring a file pointer for opening a file
    int i;

    fp=fopen("Student.txt","r");          //opening a file

    for(i=0;i<5;i++)                      //getting data from file using for loop
    {
       fgets(A[i].name,50,fp);
       fscanf(fp ,"%d",&A[i].number);
       getc(fp);
    }

    for(i=0;i<5;i++)                      //Printing the data
    {
       printf("Student %d name: %s", i+1, A[i].name);
       printf("Number: %d\n\n", A[i].number);
    }

    fclose(fp);                           //Closing the file

    return 0;
}
