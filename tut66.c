// Recurssion - Find the factorial of m.

#include<stdio.h>

int factorial(int x)
{
    int z;
    if(x==1)
    {
        return 1;
    }
    else
    {
        z=x*factorial(x-1);
        return z;
    }
}

int main()
{
    int a, b;
    printf("Enter the Number: ");
    scanf("%d", &a);
    b = factorial(a);
    printf("\nFactorial of %d is %d", a, b);
}