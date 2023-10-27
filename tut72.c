// Pointer to Structures - Basic Program.

#include<stdio.h>

struct student
{
    int rno, marks;
    char name[10];
};

int main()
{
    struct student x[5], *p;
    int i;
    p=&x[0];
    for(i=0; i<5; ++i)
    {
        printf("Enter the Name, Roll No and Marks:");
        scanf("\n%s\t%d\t%d", &p->name, &p->rno, &p->marks);
        ++p;
    }
    p=&x[0];
    for(i=0; i<5; ++i)
    {
        printf("\n%s\t%d\t%d", p->name, p->rno, p->marks);
        ++p;
    }
}