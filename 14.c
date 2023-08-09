// count the number of lines, word and characters in a givern text

#include <stdio.h>
#include <string.h>

void main()
{
    int n,i,cc=0,wc=1,lc=0;
    char text[100];
    printf("Enter the text ==>\n");
    gets(text);

    n=strlen(text);

    for(i=0;i<=n;i++)
    {
        if(text[i]=='.')
        {
            lc++;
        }
        else if(text[i]==' ' && text[i+1]!=' ' && text[i-1]!='.')
        {
            wc++;
        }
        else
        {
            cc++;
        }
    }

    printf("Characters = %d\n",cc);
    printf("Words = %d\n",wc);
    printf("Lines = %d\n",lc);
}