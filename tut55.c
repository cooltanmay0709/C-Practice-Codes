// Pointer to Array - Search a number present in array or not using Pointer.

#include<stdio.h>

int main()
{
    int a[5], i, *p, q;

    p=&a[0];
    for(i=0; i<5; ++i)
    {
        printf("Enter the Numbers: ");
        scanf("%d", p);
        ++p;
    }

    p=&a[0];
    for(i=0; i<5; ++i)
    {
        printf("\n%d", *p);
        ++p;
    }

    printf("\nEnter the Number: ");
    scanf("\n%d", &q);

    p=&a[0];
    for(i=0; i<5; ++i)
    {
        if(q==*p)
        {
            printf("\nThe Number %d is present in Array.", q);
        }
        else
        {
            printf("\nThe Number %d is not present in Array.", q);
        }
        ++p;
    }
    return 0;
}