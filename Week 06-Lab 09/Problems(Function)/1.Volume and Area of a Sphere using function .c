//Program to find Area and Volume of a Sphere using function

#include<stdio.h>
#include<math.h>
void findArea(int radius);             //Declaring function prototype
void findVolume(int radius);

double pi=3.141592654;                 //Declaring local variable pi for using in both function

int main()
{
    int r;                             //Declaring "radius" variables for main function inputs

    printf("Enter the radius:");
    scanf("%d", &r);                   //Taking input of "radius"

    findArea(r);                       //Using the area function
    printf("\n");

    findVolume(r);                     //Using the volume function
    printf("\n\n");

    return 0;
}

//Function for finding area
void findArea(int radius)
{
    double Area;

    Area = 4*pi*pow(radius,2);

    printf("Area of the sphere:%lf", Area);
}

//Function for finding volume
void findVolume(int radius)
{
    double Volume;

    Volume = (4.0/3.0)*pi*pow(radius,3);

    printf("Volume of the sphere:%lf", Volume);
}

