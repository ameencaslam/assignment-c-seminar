// copy one string to another string with and without using string handling function.

#include <stdio.h>
#include <string.h>

void main()
{
    char word1[100],word2[100],word3[100];
    
    printf("Enter the string : ");
    gets(word1);

    strcpy(word2,word1);
    printf("\nCopy with strcpy : %s\n\n",word1);

    for(int i=0;word1[i]!='\0';i++)
    {
        word3[i]=word1[i];
    }

    printf("Copy with for loop : %s\n\n",word3);
}