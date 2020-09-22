//Program containing structure declaration,initialization and accessing its components

#include<stdio.h>
#include<string.h>

struct Books                                   //declaring a structure data type named "Struct Books"
{
    char title[30];
    char author[20];
    char subject[15];
    int  book_id;
};

int main()
{
     struct Books book1;                       //declaring a variable name "book1" of data type "struct Books"

     printf("Enter book1 title: ");
     gets(book1.title);                        //using dot operator for accessing variables inside structured data type
     printf("Enter book1 author name: ");
     gets(book1.author);
     printf("Enter book1 subject: ");
     gets(book1.subject);
     printf("Enter book1 id: ");
     scanf("%d",&book1.book_id);

     //printing the inputs taken from user
     printf("\nBook1 title:%s\n",book1.title);
     printf("Book1 author name:%s\n",book1.author);
     printf("Book1 subject:%s\n",book1.subject);
     printf("Book1 id:%d\n\n",book1.book_id);

     return 0;
}
