// String - In a string push each character by one letter.

#include<stdio.h>

int main()
{
    char a[10];
    int i;

    printf("Enter the Name: ");
    gets(a);
    puts(a);

    for(i=0; a[i]!='\0'; ++i)
    {
        a[i]=a[i]+1;
    }
    printf("\nResult\n");
    printf("Pushing each character by one character in a string: %s", a);
}