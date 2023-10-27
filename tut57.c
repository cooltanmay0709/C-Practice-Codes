// Pointer to String - Count the wovels.

#include<stdio.h>

int main()
{
    char a[20], *p;
    int i, l;

    p=&a[0];
    printf("Enter the Name: ");
    gets(p);
    puts(p);

    l=0;
    for(p=&a[0]; *p!='\0'; ++p)
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            l++;
        }
    }
    printf("There are %d wovels in the given String.", l);
}