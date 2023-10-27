// Find the maximum between the elements of array.

#include<stdio.h>

int main()
{
    int a[4], i, b, max;

    for(i=0; i<4; ++i)
    {
        printf("Enter the Number: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; ++i)
    {
        if(b<a[i])
        {
            b=a[i];
            max=b;
        }
    }
    printf("Maximum Number is: %d", max);
}