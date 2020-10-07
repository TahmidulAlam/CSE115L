//Program to find highest paid player and all players of Argentina in Barcelona

#include<stdio.h>
#include<string.h>

typedef struct BarcelonaPlayer                             //Declaring structure for various types of data
{
    char name[20];
    int age;
    char country[20];
    char Position[20];
    double Salary;
    double Rating;
}P;                                                        //Typedeff the structure with "P"

void highestPaidPlayer(P*pl, int size);                    //Declaring function prototypes
void findPlayers(P*pl, int size);

int main()
{
    int i, N;
    printf("Enter how many players input to take: ");
    scanf("%d",&N);
    getc(stdin);

    P A[N];                                                //Declaring an array of structure "P"

    for(i=0;i<N;i++)                                       //taking inputs from user using for loop
    {
       printf("\nEnter %d player Name: ",i+1);
       gets(A[i].name);

       printf("Enter %d player Country: ",i+1);
       gets(A[i].country);

       printf("Enter %d player Age: ",i+1);
       scanf("%d",&A[i].age);
       getc(stdin);

       printf("Enter %d player Position: ",i+1);
       gets(A[i].Position);

       printf("Enter %d player Salary: ",i+1);
       scanf("%lf",&A[i].Salary);

       printf("Enter %d player Rating: ",i+1);
       scanf("%lf",&A[i].Rating);
       getc(stdin);
    }

    highestPaidPlayer(A,N);                                     //calling the function by value
    findPlayers(A,N);

    return 0;
}
void highestPaidPlayer(P*pl, int size)
{
     double tempSalary=0;                                       //temporary variables for keeping name and salary
     char tempName[20];

     for(int i=0;i<size;i++)
     {
        if((pl[i].Salary)>tempSalary)
        {
          tempSalary= pl[i].Salary;
          strncpy(tempName,pl[i].name,20);
        }
     }
     printf("\nHighest paid player: %s\n",tempName);
}

void findPlayers(P*pl, int size)                                 //finding players of argentina using the function
{
     printf("\nPlayers of Argentina: ");

     for(int i=0;i<size;i++)
     {
        if(strcmp(pl[i].country,"Argentina")==0)
        {
          printf("\n%s",pl[i].name);
        }
        else if(strcmp(pl[i].country,"argentina")==0)
        {
          printf("\n%s",pl[i].name);
        }
     }
     printf("\n");
}



