// File Handling - Taking data from user and copying it into new file.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20];
    int i, rno, marks;
    FILE *fs;
    
    fs = fopen("userinputdata1.pdf", "w");
    
    for(i=0; i<=5; ++i)
    {
        printf("Enter the Name, Roll No and Marks: ");
        scanf("%s%d%d", &name, &rno, &marks);
        fprintf(fs, "\n%s\t%d\t%d", name, rno, marks);
    }

    fclose(fs);
}
