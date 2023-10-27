// Pointer - Find maximum between two Numbers.

#include<stdio.h>

int main()
{
    int a, b, c, *p, *q;

    p=&a;
    q=&b;

    printf("Enter the two Numbers: ");
    scanf("%d %d", p, q);

    if(*p>*q)
    {
        printf("%d is Greater than %d", *p, *q);
    }
    else
    {
        printf("%d is Greater than %d", *q, *p);
    }
}