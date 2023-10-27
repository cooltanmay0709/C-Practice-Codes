// Using loop find the factorial of a number n.

#include<stdio.h>

int main()
{
    int i, r, a;
    printf("Enter the number to find the factorial of it: ");
    scanf("%d", &a);

    r=1;
    for(i=1; i<=a; ++i)
    {
        r=r*i;
    } 
    printf("\n%d", r);
}