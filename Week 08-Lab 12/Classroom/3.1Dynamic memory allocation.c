//Program for dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>                                         //standard library for using malloc, realloc

int main()
{
    double *data;                                          //declaring double pointer for array
    int i, n, flag;

    data = (double*)malloc(1*sizeof(double));              //allocating memory of size 1

    while(1)
    {
    printf("press 0 to terminate the program 1 to continue:\n");
    scanf("%d",&flag);

    if(flag==0)
      break;
    else if(flag==1)
    {
        printf("\nEnter size of allocated array:");
        scanf("%d",&n);                                    //taking input of memory size

        data=realloc(data,n*sizeof(double));               //reallocating the memory for taking inputs

        printf("\nEnter inputs for new array:");

        for(i=0;i<n;i++)                                   //taking inputs for new memory
        {
           scanf("%lf",data+i);
        }

        printf("\nArray elements:");
        for(i=0;i<n;i++)                                   //printing the value
        {
           printf("A[%d]=%lf\n",i,*(data+i));
        }

    }
    else
       printf("\nInvalid Input\n");
    }

    free(data);                                            //freeing the memory before terminating the program
    printf("\nMemory freed\n");

    return 0;
}
