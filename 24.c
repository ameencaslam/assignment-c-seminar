// swap two variables values with and without using third variables.

#include <stdio.h>

void main()
{
    int a,b,a1,b1,temp;

    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    a1=a;
    b1=b;

    printf("\nSwap with Third Variable\n");
    printf("Before ==> A=%d B=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After ==> A=%d B=%d\n",a,b);

    printf("\nSwap without Third Variable\n");
    printf("Before ==> A=%d B=%d\n",a1,b1);
    a1=a1+b1;
    b1=a1-b1;
    a1=a1-b1;
    printf("After ==> A=%d B=%d\n",a1,b1);
}