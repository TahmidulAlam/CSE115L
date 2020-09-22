//Program using typedef in structure initialization

#include<stdio.h>

struct participant                  //Structure data  named "struct participant"
{
    char name[20];
    char country[20];
    float score;
    int age;
};
typedef struct participant P;       //using typedef so we only have to use P

int main()
{
    P player1={"Mushfiq","Bangladesh",9.91,37};

    printf("Player Name: %s", player1.name);
    printf("\nPlayer Country: %s", player1.name);
    printf("\nPlayer Score: %f", player1.score);
    printf("\nPlayer Age: %d\n", player1.age);

    return 0;
}
