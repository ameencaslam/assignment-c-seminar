// sort the array in ascending order

#include <stdio.h>

void main()
{
    int i,num,temp,count=0;

    printf("Enter the number of elements in the Array: ");
    scanf("%d",&num);

    int array[num];

    for(i=0;i<num;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&array[i]);
    }
    start:
    for(i=0;i<num-1;i++,count++)
    {
        if(array[i]>array[i+1])
        {
            temp=array[i+1];
            array[i+1]=array[i];
            array[i]=temp;
            goto start;
        }
    }

    printf("\nAscending order: ");
    for(i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
}