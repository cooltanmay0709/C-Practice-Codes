// Array

#include<stdio.h>

int main()
{
    int a[5], i;
    for(i=0; i<5; ++i)
    {
        printf("Enter Numbers: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; ++i)
    {
        printf("\n%d", a[i]);
    }
}