//Program using array of structures

#include<stdio.h>

struct participant                      //Declaring a structured data type named "struct participant"
{
    char name[20];
    char country[20];
    float score;
    int age;
};
typedef struct participant P;           //typedef "struct participant" with "P"

int main()
{
    P A[4];

    for(int i=0;i<4;i++)                //for loop for taking multiple inputs
    {
       printf("Enter Player %d Name: ", i+1);
       gets(A[i].name);
       printf("Enter Player %d Country: ", i+1);
       gets(A[i].country);
       printf("Enter Player %d Score: ", i+1);
       scanf("%f",&A[i].score);
       printf("Enter player %d Age: ", i+1);
       scanf("%d", &A[i].age);
       printf("\n");
       fflush(stdin);
    }

    for(int i=0;i<4;i++)                 //printing the outputs using for loop
    {
       printf("\nPlayer %d Name: ", i+1);
       puts(A[i].name);
       printf("Player %d Country: ", i+1);
       puts(A[i].country);
       printf("Player %d Score: %f", i+1, A[i].score);
       printf("\nPlayer %d Age: %d\n", i+1, A[i].age);
    }

    return 0;
}
