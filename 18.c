// copy the contents of one file to another

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch,sfile[20],tfile[20];

    FILE *source,*target;

    printf("Enter name of source file : ");
    gets(sfile);

    source=fopen(sfile,"r");
    if(source==NULL)
    {
        printf("Error! File not found.");
        exit(1);
    }

    printf("Enter name of target file : ");
    gets(tfile);

    target=fopen(tfile,"w");
    if(target==NULL)
    {
        fclose(source);
        printf("Error! File not found.");
        exit(1);
    }

    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,target);
    }

    printf("File Copied Successfully.\n");
    fclose(source);
    fclose(target);
}