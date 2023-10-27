// Functions - Call by value.

#include<stdio.h>

void swap(int l, int m)
{
    int z;
    z=l;
    l=m;
    m=z;
}

int main()
{
    int a, b;
    printf("Enter the two Numbers: ");
    scanf("%d%d", &a, &b);
    swap(a,b);
    printf("\na=%d\nb=%d", a, b);
}