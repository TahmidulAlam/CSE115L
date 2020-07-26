/*Input a character and
output the same character
using printf,scanf function*/

#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);                  //using scanf for scanning the character
    printf("The character you input is:%c", ch);
    return 0;
}
