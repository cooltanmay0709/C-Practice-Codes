// String - Reverse the String.

#include<stdio.h>

int main()
{
    char a[10], b[10];
    int i, count, l, k,m;

    printf("Enter the Name: ");
    gets(a);
    puts(a);
    
    count=0;
    for(i=0; a[i]!='\0'; ++i)
    {
        count++;
    }
    k=count-1;
    for(i=0; i<k; ++i)
    {
        l=a[i];
        a[i]=a[k];
        a[k]=l;
        --k;
    }
    printf("\nResult\n");
    printf("The Reverse of String is: %s", a);
    
}