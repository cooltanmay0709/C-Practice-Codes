// Functions - Check whether the number is prime or not and if prime then add 10 and again check for prime.

#include<stdio.h>

void prime(int x)
{
    int b, c, d, count;
    count=0;
    for(b=1; b<=x; ++b)
    {
        if(x%b==0)
        {
            count++;
        }
    }
    
    if(count==2)

    {
        printf("\nThe input Number %d is a Prime Number.",x);
    }
    else
    {
        printf("\nThe Number %d is not a Prime Number",x);
    }
}

int main()
{
    int a,b;
    printf("\nEnter the Number: ");
    scanf("%d", &a);
    prime(a);
    
    b=a+10;
    prime(b);
}