// File Handling - Copying content from one file and printing it into another file.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fs, *fd;
    char ch;

    fs = fopen("tut43.c", "r");
    if(fs==NULL)
    {
        printf("\nInvalid Input\nFile Not Found");
        exit(0);
    }
    
    fd = fopen("tutcopy1.c", "w");
    
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        break;
        fputc(ch, fd);
        printf("%c", ch);
    }
    
    fclose(fs);
    fclose(fd);
    return 0;
}
