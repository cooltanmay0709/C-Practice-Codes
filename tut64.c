// Functions - Call by Reference.
// As call by value have a flashback thus we use call by reference.

#include<stdio.h>

void swap(int *l, int *m)
{
    int z;
    z=*l;
    *l=*m;
    *m=z;
}

int main()
{
    int a, b;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("\na=%d\nb=%d", a, b);
}