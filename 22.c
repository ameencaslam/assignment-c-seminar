// sales bill using array of structrures
#include <stdio.h>

struct bill
{
    int id;
    float price;
    int quant;
    float total;
}x1;

void main()
{
    printf("Enter Product ID : ");
    scanf("%d",&x1.id);
    printf("Enter Product Price : ");
    scanf("%f",&x1.price);
    printf("Enter Product Quantity : ");
    scanf("%d",&x1.quant);
    x1.total=x1.price*x1.quant;

    printf("----------------------------------------------------\n");
    printf("\tID\tPrice\tQuantity\tTotal\n");
    printf("----------------------------------------------------\n");
    printf("\t%d\t%.2f\t%d\t\t%.2f\n",x1.id,x1.price,x1.quant,x1.total);
    printf("----------------------------------------------------\n");

}