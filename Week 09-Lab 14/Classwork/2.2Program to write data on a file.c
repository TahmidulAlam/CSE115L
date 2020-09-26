//Program to take input from user and write in a file

#include<stdio.h>

int main()
{
    char name[50];                              //Declaring character array for string
    int i, n, marks;                            //Declaring integer variables
    FILE *fp;                                   //Declaring file pointer

    printf("Enter number of students: ");
    scanf("%d", &n);
    fflush(stdin);

    fp=fopen("student.txt","a");                //Opening an existing file to append

    if(fp!=NULL)
    {
      printf("\nEnter new students data\n");
      for(i=0;i<n;i++)                          //Taking data of new students using for loop
      {
         printf("\nStudent %d name: ",i+1);
         gets(name);

         printf("Enter marks: ");
         scanf("%d",&marks);
         fflush(stdin);

         fprintf(fp,"%s\n", name);              //Printing the name and data in the file
         fprintf(fp,"%d\n",marks);
      }
      fclose(fp);                               //Closing the file
    }

    return 0;
}





















