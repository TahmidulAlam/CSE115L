/*Program to read the ages of 15 people and
count the people between 40 to 60 inclusive*/



#include<stdio.h>

int main()
{
    int i=0,count=0,x;                          //Declaring integer variables
    printf("Enter the ages of 15 persons:");

    while(i<15)                                 //Using while loop for taking multiple inputs and count them
    {
         i++;
         scanf("%d", &x);
         if(x<40||x>60)
           continue;                            //using continue statement to not count ages out of range
         else
           count=count+1;
    }

    printf("\n\nNumber of persons between 40 to 60 inclusive: %d\n\n", count);   //printing the count

    return 0;
}
