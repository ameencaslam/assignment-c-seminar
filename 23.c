// addition and subtraction of complex numbers using structure

#include <stdio.h>

struct cpx
{
    int real;
    int img;
}n1,n2;

void main()
{
    printf("Enter Real part of Number 1 : ");
    scanf("%d",&n1.real);
    printf("Enter Imaginary part of Number 1 : ");
    scanf("%d",&n1.img);
    printf("Enter Real part of Number 2 : ");
    scanf("%d",&n2.real);
    printf("Enter Imaginary part of Number 2 : ");
    scanf("%d",&n2.img);

    printf("Addition : %d + %di\n",(n1.real+n2.real),(n1.img+n2.img));
    printf("Subtraction : %d + %di\n",(n1.real-n2.real),(n1.img-n2.img));
}
