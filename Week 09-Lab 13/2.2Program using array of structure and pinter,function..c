//Program to print structure of array using pointer and functions

#include<stdio.h>

typedef struct participant                        //Declaring structured data type named "struct participant"
{
    char name[20];
    char country[20];
    float score;
    int age;
}P;                                               //typedeff "struct participant" with P

void print(P *ptr, int size);                     //Declaring function prototype

int main()
{
    int n;
    printf("Enter number of player:");
    scanf("%d",&n);

    P A[n];                                       //Declaring an array of P
    fflush(stdin);                                //using fflush(stdin) so that "enter" does not count

    for(int i=0;i<n;i++)                          //for loop for taking multiple inputs
    {
       printf("\nEnter Player %d Name: ", i+1);
       gets(A[i].name);
       printf("Enter Player %d Country: ", i+1);
       gets(A[i].country);
       printf("Enter Player %d Score: ", i+1);
       scanf("%f",&A[i].score);
       printf("Enter player %d Age: ", i+1);
       scanf("%d", &A[i].age);
       fflush(stdin);
    }

    print(A,n);
}

void print(P *ptr, int size)
{
    for(int i=0;i<size;i++)                        //printing the outputs using for loop
    {
       printf("\nPlayer %d Name: ", i+1);
       puts(ptr[i].name);
       printf("Player %d Country: ", i+1);
       puts(ptr[i].country);
       printf("Player %d Score: %f", i+1, ptr[i].score);
       printf("\nPlayer %d Age: %d\n", i+1, ptr[i].age);
    }
}

