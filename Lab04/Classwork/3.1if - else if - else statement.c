//Writing "if-else if-else" statement

#include<stdio.h>
int main()
{
    float i;
    printf("Enter your final exam mark:");
    scanf("%f", &i);

    //using "if-else if-else statement" for different grades
    if(i>=93)
       printf("Grade is A");
    else if(i>=90 && i<=92)
       printf("Grade is A-");
    else if(i>=87 && i<=89)
       printf("Grade is B+");
    else if(i>=83 && i<=86)
       printf("Grade is B");
    else if(i>=80 && i<=82)
       printf("Grade is B-");
    else if(i>=77 && i<=79)
       printf("Grade is C+");
    else if(i>=73 && i<=76)
       printf("Grade is C");
    else if(i>=70 && i<=72)
       printf("Grade is C-");
    else if(i>=67 && i<=69)
       printf("Grade is D+");
    else if(i>=60 && i<=66)
       printf("Grade is D");
    else
       printf("Fail");

    return 0;
}
