// Using loop find the sum of a number in factorial form.

#include<stdio.h>

int main()
{
    int i, r, a;
    printf("Enter the number to find the factorial of it: ");
    scanf("%d", &a);

    r=0;
    for(i=1; i<=a; ++i)
    {
        r=r+i;
    } 
    printf("\n%d", r);
}