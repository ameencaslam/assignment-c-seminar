// area and circumferance of a circle

#include <stdio.h>
#include <math.h>
#define pi M_PI

void main()
{
    float r;

    printf("Enter the Radius: ");
    scanf("%f",&r);

    printf("\nArea = %.3f\n",pi*pow(r,2));
    printf("Circumferance = %.3f",2*pi*r);
}