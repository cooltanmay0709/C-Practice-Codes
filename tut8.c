// Switch Case: example

#include<stdio.h>

int main()
{
    int a, b, c, ch;

    printf("Enter the two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n1 - Add\n2 - Sub\n3 - Multi\n4 - Div\n");
    printf("Enter +4 Choice");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c=a+b;
        printf("\n%d", c);
        break;
    case 2:
        c=a-b;
        printf("\n%d", c);
        break;
    case 3:
        c=a*b;
        printf("\n%d", c);
        break;
    case 4:
        c=a/b;
        printf("\n%d", c);
        break;
    
    default:
        printf("Wrong Choice Selected");
        break;
    }
}