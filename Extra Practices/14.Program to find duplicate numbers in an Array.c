//Program to find duplicate number in an Array

#include<stdio.h>

int main()
{
    int i, j, k, w, n, count;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter array elements:");

    for(i=0;i<n;i++)
    {
       scanf("%d", &a[i]);
    }

    for(j=0;j<n;j++)
    {
       for(i=j+1;i<n;i++)
       {
          count=0;
          for(w=0;w<i;w++)
          {
             if(a[w]==a[j])
               count=count+1;
          }

          if(a[i]==a[j]&&count==1)
          {
            printf("\nduplicate number:%d",a[j]);
            printf("\nIndex:");
            for(k=j;k<n;k++)
            {
               if(a[k]==a[j])
               {
                 printf(" %d",k);
               }
            }
            printf("\n");
          }
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


