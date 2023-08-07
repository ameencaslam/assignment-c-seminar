// largest among n numbers
#include <stdio.h>
void main()
{
    int num,big=0;
    
    printf("Enter the Numbers. Enter '0' to stop the inupt:-\n\n");
    
    do
    {
        scanf("%d",&num);
        
        if(num>big)
        {
            big=num;
        }
        
    } while (num!=0);
    
    printf("\n\nLargest Number is: %d",big);
}
