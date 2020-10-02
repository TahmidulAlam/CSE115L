#include<stdio.h>
#include<string.h>

typedef struct BarcelonaPlayer
{
    char name[20];
    int age;
    char country[20];
    char Position[20];
    double Salary;
    double Rating;
}P;

void highestPaidPlayer(P*pl, int size);
void findPlayers(P*pl, int size);

int main()
{
    int i, N;
    printf("Enter how many players input to take: ");
    scanf("%d",&N);
    getc(stdin);

    P A[N];

    for(i=0;i<N;i++)
    {
       printf("\nEnter %d player Name: ",i+1);
       gets(A[i].name);

       printf("\nEnter %d player Country: ",i+1);
       gets(A[i].country);

       printf("\nEnter %d player Age: ",i+1);
       scanf("%d",&A[i].age);
       getc(stdin);

       printf("\nEnter %d player Position: ",i+1);
       gets(A[i].Position);

       printf("\nEnter %d player Salary: ",i+1);
       scanf("%lf",&A[i].Salary);

       printf("\nEnter %d player Rating: ",i+1);
       scanf("%lf",&A[i].Rating);
       printf("\n\n");
       getc(stdin);
    }

    highestPaidPlayer(A,N);


    return 0;
}
void highestPaidPlayer(P*pl, int size)
{
     double salary=0;
     char name[20];

     for(int i=0;i<size;i++)
     {
        if((pl[i].Salary)>salary)
        {
          salary= pl[i].Salary;
          strncpy(name,pl[i].name,20);
        }
     }
     printf("Highest paid player %s",name);
}



