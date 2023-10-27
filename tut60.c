// Functions - Check for Prime Numbers.

#include<stdio.h>

void prime(int);

int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    prime(a);
}

void prime(int x)
{
    int count, i;

    count=0;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
}