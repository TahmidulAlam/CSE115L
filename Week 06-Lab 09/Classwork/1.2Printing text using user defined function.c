//Program to print sentence using function

#include<stdio.h>
void display();      //Declaring the function

int main()
{
    display();       //calling the display function twice to print two times
    display();
    return 0;
}

//display(void) function for printing
void display()
{
     printf("Hello World!\n");
}
