// reverse an array
#include <stdio.h>
#define N 100

void main()
{
    int n,i;
    int main[N];

    printf("Enter the Number of entries : ");
    scanf("%d",&n);

    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&main[i]);
    }

    printf("Reverses array: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",main[i]);
    }
}