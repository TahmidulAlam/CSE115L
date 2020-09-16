//program to print integer and character varuable address using pointer

#include<stdio.h>

int main()
{
    int N;
    char Ch;

    printf("Enter a integer and character:");
    scanf("%d %c", &N, &Ch);

    printf("Address of %d: %x\n", N, &N);             //using ampersand to print address location
    printf("Address of %c: %x\n", Ch, &Ch);

    return 0;
}
