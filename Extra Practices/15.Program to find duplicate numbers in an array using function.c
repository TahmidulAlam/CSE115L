//Program to find duplicate number in an array using function

#include<stdio.h>

int count(int A[], int N);
void duplicateNum(int A[], int N);
void index(int A[], int N, int n);

int main()
{
    int i, j, n, Count;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter array elements:");

    for(i=0;i<n;i++)
    {
       scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
       Count=count(a,i);

       if(Count==1)
       {
         duplicateNum(a,i);
         index(a,i,n);
       }
    }

    int p=0;
    for(j=0;j<n;j++)
    {
       for(i=j+1;i<n;i++)
       {
           if(a[i]-a[j]==0)
             p=p+1;
       }
    }

    if(p==0)
      printf("\nno duplicate number");

    printf("\n");

    return 0;
 }

int count(int A[], int N)
{
    int i, count=0;

    for(i=0;i<N;i++)
    {
       if(A[i]==A[N])
         count=count+1;
    }

    return count;
}

void duplicateNum(int A[], int N)
{
    int i;

    printf("\n\nDuplicate number:");

    for(i=0;i<N;i++)
    {
       if(A[i]==A[N])
         printf(" %d",A[N]);
    }
}

void index(int A[], int N, int n)
{
    int i;

    printf("\nIndex:");

    for(i=0;i<=n;i++)
    {
       if(A[i]==A[N])
         printf(" %d",i);
    }
}



























