// Sum of Elements.

#include<stdio.h>

int main()
{
    int a[7], i, c;

    for(i=0; i<7; ++i)
    {
        printf("Enter the Number: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<7; ++i)
    {
        c=c+a[i];
    }
    printf("Sum = %d", c);
}