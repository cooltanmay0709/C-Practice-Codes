// Pointer to String - Convert the String from capital to small and small to capital.

#include<stdio.h>

int main()
{
    char a[20], *p;
    int i, l;

    p=&a[0];
    printf("Enter the Name: ");
    gets(p);
    puts(p);

    for(p=&a[0]; *p!='\0'; ++p)
    {
        if(*p>64 && *p<91)
        {
            *p=*p+32;
        }
        else if(*p>96 && *p<123)
        {
            *p=*p-32;
        }
    }
    p=&a[0];
    printf("\nResult\n");
    puts(p);
}