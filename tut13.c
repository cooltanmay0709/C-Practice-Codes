// using for loop print a Multiplication table of any input

#include<stdio.h>

int main()
{
    int i, a;

    printf("Enter the Number for Table: ");
    scanf("%d", &a);
    
    for(i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d", a, i, a*i);
    }   
}