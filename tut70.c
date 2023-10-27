// Structures - Search the roll number in the array.

#include<stdio.h>

struct student
{
    int rno, marks;
    char name[11], gender[11];
};

int main()
{
    struct student x[3];
    int i, choice;
    for(i=0; i<3; ++i)
    {
        printf("Enter the Name, Gender, Roll No and Marks: ");
        scanf("%s%s%d%d", &x[i].name, &x[i].gender, &x[i].rno, &x[i].marks);
    }
    for(i=0; i<3; ++i)
    {
        printf("\n%s\t%s\t%d\t%d", x[i].name, x[i].gender, x[i].rno, x[i].marks);
    }
    printf("\nEnter the Roll No to Search: ");
    scanf("%d", &choice);
    for(i=0; i<3; ++i)
    {
        if(choice==x[i].rno)
        {
            printf("Found %d", x[i].rno);
        }
        else
        {
            printf("You have entered invalid input.");
        }
    }
}