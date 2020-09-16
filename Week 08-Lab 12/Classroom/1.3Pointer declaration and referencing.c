//Program to print address variable, pointer variable and value of pointer

#include<stdio.h>

int main()
{
    int n;

    printf("Enter a integer:");
    scanf("%d",&n);

    int *ip;                                   //declaring pointer variable
    ip=&n;                                     //connecting pointer with address

    printf("Address of %d: %x\n", n, &n);
    printf("Address stored in ip:  %x\n",ip);
    printf("Value of *ip : %d\n",*ip);

    return 0;
}
