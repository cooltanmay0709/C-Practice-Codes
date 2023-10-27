// Switch Case Program
// Switch Case 1: Area or Triangle
// Switch Case 2: Area of Circle
// Switch Case 3: Area of Rectangle

#include<stdio.h>
#define PI 3.14
int main()
{
    float h, ba, l, b, r, Area;
    int ch;

    printf("Enter the values for h, ba, l, b, r");
    scanf("%f %f %f %f %f", &h, &ba, &l, &b, &r);
    printf("\n1 - Area of Triangle\n2 - Area of Circle\n3 - Area of Rectangle\n");
    printf("Enter Your Choice between 1 to 3: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        Area=0.5*h*ba;
        printf("Area of Triangle is %f", Area);
        break;
    case 2:
        Area=PI*r*r;
        printf("Area of Circle is %f", Area);
        break;
    case 3:
        Area=l*b;
        printf("Area of Rectangle is %f", Area);
        break;
    default:
        printf("You have Entered wrong choice");
        break;
    }

}