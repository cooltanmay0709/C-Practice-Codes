// File Handling - Reading user inputed file.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    int rno, marks;
    FILE *fs;

    fs = fopen("userinputdata1.pdf", "r");

    while(fscanf(fs, "%s%d%d", &name, &rno, &marks)!=EOF)
    {
        printf("\n%s\t%d\t%d", name, rno, marks);
    }
    
    fclose(fs);
}
