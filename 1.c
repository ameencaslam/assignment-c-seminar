// program to find average of n numbers

#include <stdio.h>

void main()
{
    int n,i,sum=0,num;
    float mean;
    printf("Enter number of entries: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        sum+=num;
    }
    mean=sum/n;
    printf("\nMean is : %.2f",mean);
}