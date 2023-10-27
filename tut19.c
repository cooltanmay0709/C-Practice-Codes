#include<stdio.h>

int main()
{
    int a, b, i, x;
    printf("Enter a digit: ");
    scanf("%d", &a);
    x=a;                                                                 
    b=0;

    while(a>0)
    {
        i=a%10;
        b=b+i*i*i;
        a=a/10;
    }
    if(b==x)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    
    return 0;
}
