// determine if the given string is a palindrome or not using functions

#include <stdio.h>
#include <string.h>

int paldro(char c[])
{
    int i,l;
    l=strlen(c)-1;
    for(i=0;i<l;i++)
    {
        if(c[i]==c[l-i])
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void main()
{
    int res,n;
    char word[30];
    printf("Enter the string : ");
    gets(word);
    res=paldro(word);
    if(res==0)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }
}