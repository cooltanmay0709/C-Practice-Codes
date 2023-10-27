// Pointer - Basic Program

#include<stdio.h>

int main()
{
    int a, b, *p, *q, c;
    
    a=10;
    p=&a;
    q=&b;

    printf("Enter two Numbers: ");
    scanf("%d %d", p, q);

    c = *p + *q;
    
    printf("\n%d", c);
    
}