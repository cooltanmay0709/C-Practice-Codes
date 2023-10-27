// Using while loop print multiplication of table for the number entered

#include<stdio.h>

int main()
{
    int a, b;
    a=1;

    printf("Enter the Number: ");
    scanf("%d", &b);

    while(a<=10)
    {
        printf("\n%d * %d = %d", b, a, b*a);
        ++a;
    }

}