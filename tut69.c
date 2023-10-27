// Structures - Basic Program using array.

#include<stdio.h>

struct student
{
    int rno, marks;
    char name[5];
};

int main()
{
    struct student x[5];
    int i;
    for(i=0; i<5; ++i)
    {
        printf("Enter the Name, Roll No and Marks: ");
        scanf("%s%d%d", &x[i].name, &x[i].rno, &x[i].marks);
    }
    for(i=0; i<5; ++i)
    {
        printf("\n%s\t%d\t%d", x[i].name, x[i].rno, x[i].marks);
    }
}