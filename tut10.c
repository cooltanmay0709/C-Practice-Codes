#include<stdio.h>

void main()
{
    float a, b, c;
    char ch;

    printf("Enter the Two Numbers a and b: ");
    scanf("%f%f", &a, &b);
    printf("\na - Add\ns - Sub\nm - Multi\nd - Divide");
    printf("\nEnter any choice from above four choices: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'a':
            c=a+b;
            printf("Addition - %f", c);
            break;
        case 's':
            c=a-b;
            printf("Subtraction - %f", c);
            break;
        case 'm':
            c=a*b;
            printf("Multiplication - %f", c);
            break;
        case 'd':
            c=a/b;
            printf("Divide - %f", c);
            break;
        default:
            printf("You have Entered the wrong choice.");
            
    }
}