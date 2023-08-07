// greatest coomon diviser

#include <stdio.h>

void main()
{
    int i,r1,r2,num,num1,num2,lrg;

    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    
    if(num1>num2)
    {
        num=num2;
    }
    else
    {
        num=num1;
    }
    
    for(i=1;i<=num;i++)
    {
        r1=num1%i;
        r2=num2%i;
        if(r1==0 && r2==0)
        {
            if(i>lrg)
            {
                lrg=i;
            }
        }
    }
    
    printf("Greatest Common Diviser = %d",lrg);
}