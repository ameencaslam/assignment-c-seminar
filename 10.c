// simple interest
#include <stdio.h>
void main()
{
    float num,ir,yr,result;
    printf("Enter Principal Amount: ");
    scanf("%f",&num);
    printf("Enter Annual Interest Rate: ");
    scanf("%f",&ir);
    printf("Enter Time in Years: ");
    scanf("%f",&yr);
    result=(num*(1+((ir/100)*yr)));
    printf("Simple Interest = %.2f\n",result-num);
    printf("Total = %.2f",result);
}