// largest of three numbers

#include <stdio.h>

void main()
{
    int i,num[3],l=0;

    for(i=0;i<3;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>l)
        {
            l=num[i];
        }
    }

    printf("\nLargest of three is %d",l);
}