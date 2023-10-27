// Functions - Basics.

// Program 1: Functions  without argument without return.
#include<stdio.h>

void sum();

int main()
{
    sum();
}

void sum()
{
    int a, b, c;
    printf("\nEnter the two Numbers: ");
    scanf("%d%d", &a, &b);
    c=a+b;
    printf("\n%d", c);
}

// Program 2: Functions with argument without return.
#include<stdio.h>

void sum(int, int);

void main()
{
    int a, b;
    printf("Enter the two Numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
}

void sum(int l, int m)
{
    int z;
    z=l+m;
    printf("\n%d", z);
}

// Program 3: Functions with argument with return.
#include<stdio.h>

int sum(int, int);

int main()
{
    int a, b, c;
    printf("Enter the two Numbers: ");
    scanf("%d%d", &a, &b);
    c=sum(a, b);
    printf("\n%d", c);
}

int sum(int l, int m)
{
    int z; 
    z=l+m;
    return z;
}
