// Adding two arrays

#include<stdio.h>

int main()
{
    int a[4], i, b[4], c;

    for(i=0; i<4; ++i)
    {
        printf("Enter the number: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; ++i)
    {
        printf("Enter the Number: ");
        scanf("%d", &b[i]);
    }
    for(i=0; i<4; ++i)
    {
        c=a[i]+b[i];
        printf("\nThe sum of Array is: %d", c);
    }
    return 0;
}