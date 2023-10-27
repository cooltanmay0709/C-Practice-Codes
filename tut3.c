#include<stdio.h>

void main()
{
    int principle, rate, noy;
    float Si;

    printf("Enter the value of Principle: ");
    scanf("%d", &principle);
    printf("Enter the value of Rate: ");
    scanf("%d", &rate);
    printf("Enter the value of noy: ");
    scanf("%d", &noy);

    Si=principle*rate*noy/100;

    printf("\nSimple Interest is %f", Si);

}