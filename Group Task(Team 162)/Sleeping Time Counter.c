/*Program to determine the time duration
 in minutes from a given time to another time*/

#include<stdio.h>

int main()
{
    int h1, m1, h2, m2, alarm, current, result;

    printf("Enter current hour and minute & then ringing hour and minute:\n\n");

    while(1)                                                    //for running into infinity loop.
    {
        scanf("%d %d %d %d", &h1 , &m1 , &h2 , &m2);            //Input can also be taken putting spaces between.
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;                                              //four zero input will terminate the program.

        else if((h1>=00&&h1<=23)&&(m1>=00&&m1<=59)&&(h2>=00&&h2<=23)&&(m2>=00&&m2<=59))
        {
            current=h1*60+m1;
            alarm=h2*60+m2;
            result=(alarm-current+24*60)%(24*60);               //adding(24*60) if alarm-current<0, modulus by (24*60) if result>(24*60)
            printf("Sleeping time duration: %d\n\n", result);   //double \n for 2 new lines.
        }

        else
            printf("Invalid time\n\n");
    }

    return 0;
}
