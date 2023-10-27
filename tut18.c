// Write a program to do sum of digits using loops.

#include<stdio.h>

int main()
{
    int a, b, i;
    printf("Enter a digit to get the sum of numbers: ");
    scanf("%d", &a);
    b=0;

    while(a>0)
    {
        i=a%10;
        b=b+i;
        a=a/10;
    }
    printf("Sum of Number of digts is %d", b);
    return 0;

}
