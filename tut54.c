// Pointer to Array - Basic Program.

#include<stdio.h>

int main()
{
    int a[5], i, *p;

    p=&a[0];
    for(i=0; i<5; ++i)
    {
        printf("Enter the Number: ");
        scanf("%d", p);
        ++p;
    }
    
    p=&a[0];
    for(i=0; i<5; ++i)
    {
        printf("\n%d", *p);
        ++p;
    }
}