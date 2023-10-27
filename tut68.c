// Structures - Basic Program.

#include<stdio.h>

struct student
{
    int rno, marks;
    char name[10];
};

int main()
{
    struct student x;
    printf("Enter the Name, Roll Number and Marks: ");
    scanf("%s%d%d", &x.name , &x.rno, &x.marks);
    printf("\n%s\t%d\t%d", x.name, x.rno, x.marks);

}