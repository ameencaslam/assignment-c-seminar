// print factors of a number

#include <stdio.h>

void main()
{
    int num,i,res;
    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("\nFactors are : ");
    for(i=1;i<=num;i++)
    {
        res=num%i;
        if(res==0)
        {
            printf("%d,",i);
        }
    }
}