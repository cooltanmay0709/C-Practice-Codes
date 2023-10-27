// String - Count the Characters in a String.

#include<stdio.h>

int main()
{
    char a[10];
    int count, i, l;

    printf("Enter the Wovels: ");
    gets(a);
    puts(a);
    
    count=0;
    for(i=0; a[i]!='\0'; ++i)
    {
        count++;
    }
    printf("The count is %d", count);
}