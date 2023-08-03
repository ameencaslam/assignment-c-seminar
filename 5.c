// c program for addiition and subtraction of matrices
#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    int row,col,i,j,k,temp1,temp2;

    printf("Enter the number of rows and columns of the matrices\n\nEnter the number of Rows: ");
    scanf("%d",&row);
    printf("Enter the number of Columns: ");
    scanf("%d",&col);

    temp1=(row*col)-1;

    int mat1[temp1],mat2[temp1];

    printf("\n\nEnter the contents of the First Matrix:-\n");
    k=0;
    for(i=1;i<=row;i++)
    {
        printf("Enter contents of row %d : ",i);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[k]);
            k++;
        }
    }

    printf("\n\nEnter the contents of the Second Matrix:-\n");
    k=0;
    for(i=1;i<=row;i++)
    {
        printf("Enter contents of row %d : ",i);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat2[k]);
            k++;
        }
    }

    printf("\n\nAddition ==>\n\n");
    k=0;
    for(i=1;i<=row;i++)
    {
        for(j=0;j<col;j++)
        {
            temp2=mat1[k]+mat2[k];
            printf("\t%d",temp2);
            k++;
        }
        printf("\n\n");
    }
    printf("\n\n");

    printf("\n\nSubtraction ==>\n\n");
    k=0;
    for(i=1;i<=row;i++)
    {
        for(j=0;j<col;j++)
        {
            temp2=mat1[k]-mat2[k];
            printf("\t%d",temp2);
            k++;
        }
        printf("\n\n");
    }
    printf("\n\n");
}