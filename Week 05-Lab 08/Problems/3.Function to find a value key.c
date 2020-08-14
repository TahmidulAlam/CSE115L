//Program to search for a value key in an array

#include<stdio.h>
void search(int arr[], int size, int key);

int main()
{
    int i, n, z;


    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];

    printf("Array Elements:");

    for(i=0;i<n;i++)
    {
       scanf("%d", &a[i]);
    }

    printf("Search Key:");
    scanf("%d", &z);

    void search(a,n,z);

    return 0;
}

void search(int arr[],int size, int key)
{
    int j, found=0;

    for(j=0;j<size;j++)
    {
       if(key==arr[j])
         found=1;
         break;
    }

    if (found==1)
       printf("Found");
    else
       printf("Not found");

    return 0;
}
