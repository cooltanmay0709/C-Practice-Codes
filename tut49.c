// String - In a string convert from capital to small and small to capital.

#include<stdio.h>

int main()
{
    char a[20], ch;
    int i;
    
    printf("Enter the Name: ");
    gets(a);
    puts(a);

    for(i=0; a[i]!='\0'; ++i)
    {
        if(a[i]>64 && a[i]<91)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>96 && a[i]<123)
        {
            a[i]=a[i]-32;
        }
    }
    printf("Converted string from capital to small and small to capital: %s", a);
}