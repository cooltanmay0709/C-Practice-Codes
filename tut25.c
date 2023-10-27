#include<stdio.h>

int main()
{
    int a, b;
    
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);

    (a>b ? printf("%d is Greater", a):
     b>a ? printf("%d is Greater", b):
     printf("Equal"));
     
}