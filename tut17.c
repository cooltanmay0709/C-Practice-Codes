// Make a reverse of a digit.

#include<stdio.h>

int main()
{
    int a, b, i;
    printf("Enter a digit to reverse: ");
    scanf("%d", &a);
    b=0;

    while(a>0)
    {
        i=a%10;
        b=b*10+i;
        a=a/10;
    }
    printf("Reversed Number is %d", b);
    return 0;
}
