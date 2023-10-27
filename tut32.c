// Find the minimum between the elements of array.

#include<stdio.h>

int main()
{
    int a[4], i, b, min;

    for(i=0; i<4; ++i)
    {
        printf("Enter the Number: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; ++i)
    {
        if(b>a[i])
        {
            b=a[i];
            min=b;
        }
    }
    printf("Minimum Number is: %d", min);
}