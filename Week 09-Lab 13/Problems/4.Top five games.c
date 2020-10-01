//Program for taking inputs from 5 gamers their favorite games and printing the top 5 games

#include<stdio.h>
#include<string.h>

typedef struct Gamer                                                               //Declaring a structure for keeping inputs
{
    int Number_of_favorite_games;
    char List_of_favorite_games[10][20];
}G;                                                                                //typedef the structure with "G"

typedef struct game                                                                //another structure for copying the inputs
{
    char name[20];
    int n;
}g;

int main()
{
    int i, j, k, N=0, w=0, temp;                                                   //declaring integer variables
    char tempStr[20];                                                              //Declaring character array for temporary string
    G A[5];                                                                        //declaring array of data type "G"

    for(i=0;i<5;i++)                                                               //taking inputs from user
    {
       printf("Enter %d gamer's number of games: ",i+1);
       scanf("%d",&A[i].Number_of_favorite_games);
       N=N+A[i].Number_of_favorite_games;                                          //total number of inputs for later use
       getc(stdin);

       for(j=0;j<A[i].Number_of_favorite_games;j++)
       {
          printf("Enter game %d name: ",j+1);
          gets(A[i].List_of_favorite_games[j]);
       }
       printf("\n");
    }

    g a[N];                                                                        //declaring array of data type "g"
    w=0;
    for(i=0;i<5;i++)                                                               //copying the inputs to a[N] array for later comparing
    {
        for(j=0;j<A[i].Number_of_favorite_games;j++)
        {
            strcpy(a[w].name,A[i].List_of_favorite_games[j]);
            a[w].n=0;
            w=w+1;
        }
    }

    for(i=0;i<N;i++)
    {
       a[i].n=1;

       for(j=i+1;j<N;j++)                                                         //finding how many times a game appears and putting the value in n
       {
          if(strcmp(a[j].name,a[i].name)==0)
            a[i].n=a[i].n+1;
       }
       for(k=0;k<i;k++)                                                           //if a game has been already counted then n becomes -1 so that it does not count
       {
          if(strcmp(a[k].name,a[i].name)==0)
          {
            a[i].n=-1;
            break;
          }
       }
    }

    for(i=0;i<N;i++)
    {
       for(j=i+1;j<N;j++)
       {
          if(a[j].n>a[i].n||(a[j].n==a[i].n&&strcmp(a[j].name,a[i].name)>0))      //giving the proper conditions for swapping two variables to arrange them in descending order
          {
            strncpy(tempStr,a[i].name,20);
            strncpy(a[i].name,a[j].name,20);
            strncpy(a[j].name,tempStr,20);

            temp=a[i].n;
            a[i].n=a[j].n;
            a[j].n=temp;
          }
       }
    }
    printf("\nTop five games:\n");

    for(i=0;i<5;i++)                                                              //printing the top 5 games
    {
       k=0;                                                                       //using a flag value k so that if games are less than 5 no game repeats
       for(j=0;j<i;j++)
       {
          if(strcmp(a[j].name,a[i].name)==0)
            k=1;
       }
       if(k==0)
         printf("%s\n",a[i].name);
    }

    return 0;
}
