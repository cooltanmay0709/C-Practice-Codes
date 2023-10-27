// Find wether the number is prime number or not.

#include<stdio.h>

int main()
{
    int a, count, i;
    printf("Enter a digit to check whether it is prime or not: ");
    scanf("%d", &a);
    count=0;

    for(i=1; i<=a; ++i)
    {
        if(a%i==0)
        {
            ++count;
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
    return 0;
}