// File Handling - Basic Program.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fs;
    char ch;
    fs = fopen("tut38.c", "r");

    if(fs==NULL)
    {
        printf("File Not Found");
        exit(0);
    }

    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        break;
        printf("%c", ch);
    }
    fclose(fs);
    return 0;
}