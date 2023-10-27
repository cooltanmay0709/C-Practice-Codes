#include<stdio.h>

void main()
{
    int a, b, c, d;

    printf("Enter the value of a: ");
    scanf("%d", &a); 
    printf("Enter the value of b: ");
    scanf("%d", &b);

    c=a/b;
    d=a%b;

    printf("\nResult for c is %d", c);
    printf("\nResult for d is %d", d);
    
}