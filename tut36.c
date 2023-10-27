// Take a number by User and Search that number in the array if number is present then print found.

#include<stdio.h>

int main()
{
    int a[5], i, j;
    
    printf("Enter a number: ");
    scanf("%d", &j);

    for(i=0; i<5; ++i)
    {
        printf("Enter the Numbers: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; ++i)
    {
        if(j==a[i])
        {
        printf("Found %d", j);
        }
    }
    return 0;
}