// Display array elements using calloc function

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,*ptr,*ptr2,i;

    printf("Enter number of entries: ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));
    ptr2=ptr;

    if(ptr==NULL)
    {
        printf("Memory not Allocated!");
        exit(1);
    }

    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    printf("\nNumbers are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr2);
        ptr2++;
    }
}