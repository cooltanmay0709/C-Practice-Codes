// String - Count the Wovels in a String.

#include<stdio.h>

int main()
{
    char a[10];
    int count, i,l;

    printf("Enter the Wovels: ");
    gets(a);
    puts(a);
    count=0;
    
    for(i=0; a[i]!='\0'; ++i)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
           count++; 
        }
    }
    printf("The count is %d", count);
}