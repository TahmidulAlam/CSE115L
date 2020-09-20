//Program to swap two variables using pointers

#include<stdio.h>
void swap(int*a,int*b);                     //declaring function prototype to swap the variables

int main()
{
    int a, b;                                  //declaring variables

    //taking inputs from user
    printf("Enter value of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);

    swap(&a,&b);                                //calling the void function to swap the variables

    printf("\n\nAfter swapping\n a=%d\n b=%d\n",a,b);

    return 0;
}

//the void functions to swap the variables
void swap(int*a,int*b)
{
     int temp;

     temp=*a;                                  //using a temp value for storing the value of a
     *a=*b;                                    //dereferencing the pointer "a" to change the value in "a"
     *b=temp;                                  //dereferencing the pointer "b" to change the value in "b"
}
