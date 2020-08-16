//Program to print heart of stars with name in it

#include <stdio.h>
int main()
{
    int i, j, n, N, L;              //Declaring variables
    char name[50];                  //declaring name string

    printf("Enter your name:");
    gets(name);                     //taking character input
    printf("Enter value of n : ");  //Taking input
    scanf("%d", &n);

    N=(n+1)/4;                      //for the upper part of heart
    L=strlen(name);                 //getting the length of name

    //Printing the upper part
    for(i=0;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)         //printing spaces
        {
           printf(" ");
        }
        for(j=1;j<=n-2*(N-i)-1;j++) //printing stars
        {
           printf("*");
        }
        for(j=1;j<=2*(N-i)+1;j++)   //printing spaces
        {
           printf(" ");
        }
        for(j=1;j<=n-2*(N-i)-1;j++) //printing stars
        {
           printf("*");
        }
        printf("\n");
    }

    //Printing the lower part
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i-1; j++)
        {
            printf(" ");
        }

        //Printing the namee
        if(i==1)
        {
          for(j=1; j<=(2*(n-i)+1-L)/2; j++)
          {
             printf("*");
          }

          //printing the name
          printf("%s",name);

          //making the pattern smooth
          if(L%2==0)
          {
               for(j=0; j<=(2*(n-i)+1-L)/2; j++)
               {
                  printf("*");
               }
          }
          else
          {
             for(j=1; j<=(2*(n-i)+1-L)/2; j++)
             {
                printf("*");
             }
          }
        }
        //Printing the rest of lower part
        else
        {
           for(j=1; j<=2*(n-i)+1; j++)
           {
              printf("*");
           }
        }
           printf("\n");
    }
    return 0;
}
