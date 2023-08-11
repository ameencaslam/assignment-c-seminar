// currency conversion.min-4.

#include <stdio.h>

void main()
{
    float dollar=82,euro=90,yen=0.57,riyal=22,num,d,e,y,r;
    int choice;

    printf("Enter the amount in INR : ");
    scanf("%f",&num);

    d=num/dollar;
    e=num/euro;
    y=num/yen;
    r=num/riyal;

    printf("\nIndian Rupees = %.2f\nUnited States Dollars = %.2f\nEuropean Euros = %.2f\nJapanese Yen = %.2f\nSaudi Riyal = %.2f",num,d,e,y,r);
}