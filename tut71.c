// Structures - Search the name in the array.

#include<stdio.h>
#include<string.h>

struct student
{
    int rno, marks;
    char name[11], gender[11];
};

int main()
{
    struct student x[3];
    int i, num;
    char str1[11], str2[11];
    for(i=0; i<3; ++i)
    {
        printf("Enter the Name, Gender, Roll No and Marks: ");
        scanf("%s%s%d%d", &x[i].name, &x[i].gender, &x[i].rno, &x[i].marks);
    }
    for(i=0; i<3; ++i)
    {
        printf("\n%s\t%s\t%d\t%d", x[i].name, x[i].gender, x[i].rno, x[i].marks);
    }
    printf("\nEnter the Name to Search: ");
    scanf("%s", &str1);
    for(i=0; i<3; ++i)
    {
       if(strcmp(str1,x[i].name)==0)
        {
            printf("\n%s\t%s\t%d\t%d", x[i].name, x[i].gender, x[i].rno, x[i].marks);
        }
    }
    return 0;
}