// Pointer to Character Array(String) - Basic Program.

#include<stdio.h>

int main()
{
    char a[10], *p;
    int i, l;

    p=&a[0];

    printf("Enter the Name: ");
    gets(p);

    l=0; 
    for(p=&a[0]; *p!='\0'; ++p)
    {
        l++;
    }
    printf("\n%d", l);

    return 0; 
}