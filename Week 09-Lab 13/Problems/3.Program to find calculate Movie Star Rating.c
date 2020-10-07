//Program to calculate movie stars rating

#include<stdio.h>
#include<string.h>

typedef struct MovieStar                                   //Declaring structure for different types of data
{
    char name[20];
    float Rating;
    int TotalFans;
}M;

int main()
{
    int i, j, k=0, N, flag;                                //declaring variables
    float tempRating;
    char tempName[20];                                     //declaring character array for string

    printf("Enter how many user reviews to take: ");
    scanf("%d",&N);
    getc(stdin);

    M A[5];

    for(i=0;i<N;i++)
    {
       printf("\nUser %d", i+1);
       printf("\nEnter Movie star's Name: ");
       gets(tempName);

       flag=0;

       for(j=0;j<5;j++)
       {
          if(strcmp(A[j].name,tempName)==0)                //finding a match with previous input
          {
            flag=1;                                        //flag becomes 1 if match found
            printf("Enter Movie star's rating: ");
            scanf("%f",&tempRating);
            getc(stdin);
            A[j].Rating=A[j].Rating+tempRating;            //summation of rating
            A[j].TotalFans=A[j].TotalFans+1;               //increasing number of fans +1 every time
          }
       }

       if(flag==0&&k<5)                                    //if no match found this input takes another position in array
       {
         strcpy(A[k].name,tempName);
         printf("Enter Movie star's rating: ");
         scanf("%f",&tempRating);
         getc(stdin);
         A[k].Rating=0;
         A[k].TotalFans=0;
         A[k].Rating=A[k].Rating+tempRating;
         A[k].TotalFans=A[k].TotalFans+1;
         k=k+1;                                            //changing position in array for next input
       }
       else if(flag==0&&k>=5)                              //if the array is full no new inputs are taken
       {
         printf("\nAlready 5 movie star's name has been taken as input.\n");
         i=i-1;
       }
    }

    for(i=0;i<k;i++)
    {
      A[i].Rating=A[i].Rating/A[i].TotalFans;              //calculating average of rating
      printf("\n%s's rating: %f\n", A[i].name, A[i].Rating);
    }

    return 0;
}


