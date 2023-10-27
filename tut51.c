// String - Find wether the words in a string is palindrome or not.

#include<stdio.h>

int main()
{
    char a[10];
    int i, k, count;

    printf("Enter the Name: ");
    gets(a);
    puts(a);

    for(i=0; a[i]!='\0'; ++i)
    {
        count++;
    }

    count--;
    k=1;
    for(i=0; a[i]!='\0'; ++i, --count)
    {
        if(a[i]!=a[count])
        {
            k=0;
            break;
        }
    }
    if(k==1)
    {
        printf("\nThe name is Palindrome");
    }
    else
    {
        printf("\nThe name is not Palindrome");
    }
}